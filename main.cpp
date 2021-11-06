#include <iostream>
#include "Binary_tree.h"

Binary_tree::Binary_tree()
{
    root = NULL;
}

void Binary_tree::insert_node(Coordinates coordinates, Binary_tree_node *leaf){
    if (coordinates.get_coordinate_Y() < leaf->data.get_coordinate_Y()){
        if (leaf->left != NULL){
            insert_node(coordinates, leaf->left);
        }
        else
        {
            leaf->left = new Binary_tree_node;
            leaf->left->data = coordinates;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }
    else if(coordinates.get_coordinate_Y() >= leaf->data.get_coordinate_Y()){
        if (leaf->right != NULL){
            insert_node(coordinates, leaf->right);
        }
        else
        {
            leaf->right = new Binary_tree_node;
            leaf->right->data = coordinates;
            leaf->right->right = NULL;
            leaf->right->left = NULL;
        }
    }
}

void Binary_tree::insert_node(Coordinates coordinates)
{
    if (root != NULL){
        insert_node(coordinates, root);
    }
    else
    {
        root = new Binary_tree_node;
        root->data = coordinates;
        root->left = NULL;
        root->right = NULL;
    }
}

void Binary_tree::output(Binary_tree_node *leaf){
    if (leaf->data.get_coordinate_Y() > 0){
    std::cout << "Coordinate X:" << leaf->data.get_coordinate_X() << " ";
    std::cout << "Coordinate Y:" << leaf->data.get_coordinate_Y() << std::endl;
        if (leaf->left != NULL){
            output(leaf->left);
        }
        if (leaf->right != NULL){
            output(leaf->right);
        }
    } else{
        if (leaf->right != NULL)
            output(leaf->right);
    }
}

void Binary_tree::output()
{
    if (root != NULL){
        output(root);
    }else{
        std::cout << "This tree is empty" << std::endl;
    }
}

void Binary_tree::swerhu_vniz(){
    swerhu_vniz(root);
}

void Binary_tree::swerhu_vniz(Binary_tree_node *leaf){
    if (leaf != NULL){
        std::cout << "Coordinate X:" << leaf->data.get_coordinate_X() << " ";
        std::cout << "Coordinate Y:" << leaf->data.get_coordinate_Y() << std::endl;
        swerhu_vniz(leaf->left);
        swerhu_vniz(leaf->right);
    }
}

Coordinates Binary_tree::search_key(Binary_tree_node *leaf){
    if (leaf->data.get_coordinate_Y() < 0 && leaf->data.get_coordinate_X() < 0)
        return leaf->data;
    else{
        if (leaf->left != NULL){
            Coordinates found = search_key(leaf->left);
            return found;
        }
        if (leaf->right != NULL){
            Coordinates found = search_key(leaf->right);
            return found;
        }
    }
}

Binary_tree_node *Binary_tree::search(Binary_tree_node *leaf){
    struct Binary_tree_node *current = leaf;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

void Binary_tree::negative_X_and_Y_points_exclusion(){
    if (root != NULL){
        Coordinates key = search_key(root);
        root = negative_X_and_Y_points_exclusion(root, key);
    }
}

Binary_tree_node *Binary_tree::negative_X_and_Y_points_exclusion(Binary_tree_node *root, Coordinates key){
    if (root == NULL)
        return root;
    if (key.get_coordinate_Y() < root->data.get_coordinate_Y())
        root->left = negative_X_and_Y_points_exclusion(root->left, key);
    else if (key.get_coordinate_Y() > root->data.get_coordinate_Y())
        root->right = negative_X_and_Y_points_exclusion(root->right, key);
    else{
        if (root->left == NULL and root->right == NULL)
            return NULL;
        else if (root->left == NULL){
            Binary_tree_node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL){
            Binary_tree_node *temp = root->left;
            delete root;
            return temp;
        }
        Binary_tree_node *temp = search(root->right);
        root->data = temp->data;
        root->right = negative_X_and_Y_points_exclusion(root->right, temp->data);
    }
    return root;
}

void Binary_tree::destroy_tree(Binary_tree_node *leaf){
    if (leaf != NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void Binary_tree::destroy_tree(){
    destroy_tree(root);
}

Binary_tree::~Binary_tree(){
    destroy_tree();
}

int main(){
    Binary_tree Binarne;
    int operation_number, number_of_negative_points;
    double x,y;
    int i;
    for ( ; ; ){
        std::cout << "Choose the operation with Binary tree:" << std::endl;
        std::cout << "1 - Insert new node" << std::endl;
        std::cout << "2 - Output all nodes with positive Y coordinate" << std::endl;
        std::cout << "3 - Delete all nodes with negative coordinates" << std::endl;
        std::cout << "4 - Output tree from top to below" << std::endl;
        std::cout << "5 - End" << std::endl;
        std::cin >> operation_number;
        if (operation_number == 1){
            std::cout << "Enter the X coordinate:" << std::endl;
            std::cin >> x;
            std::cout << "Enter the Y coordinate:" << std::endl;
            std::cin >> y;
            Coordinates Point;
            if (x < 0 && y < 0){
                number_of_negative_points += 1;
            }
            Point.set_coordinates(x, y);
            Binarne.insert_node(Point);
            operation_number = 0;
        }
        else if (operation_number == 2){
            Binarne.output();
            operation_number = 0;
        }
        else if (operation_number == 3){
            for (i = 0; i < number_of_negative_points; i++)
            Binarne.negative_X_and_Y_points_exclusion();
            operation_number = 0;
        }
        else if (operation_number == 4){
            Binarne.swerhu_vniz();
            operation_number = 0;
        }
        else if (operation_number == 5)
            break;
    }
}