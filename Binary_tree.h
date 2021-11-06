#include <iostream>
#include "Binary_tree_node.h"

class Binary_tree
{
    private:
        Binary_tree_node *root;
        void insert_node(Coordinates coordinates, Binary_tree_node *leaf);
        void output(Binary_tree_node *leaf);
        void destroy_tree(Binary_tree_node *leaf);
        void destroy_tree();
        void swerhu_vniz(Binary_tree_node *leaf);
        Binary_tree_node *search(Binary_tree_node *leaf);
        Coordinates search_key(Binary_tree_node *leaf);
        Binary_tree_node *negative_X_and_Y_points_exclusion(Binary_tree_node *leaf, Coordinates key);
    public:
        void negative_X_and_Y_points_exclusion();
        Binary_tree();
        ~Binary_tree();
        void insert_node(Coordinates coordinates);
        void output();
        void swerhu_vniz();
};

