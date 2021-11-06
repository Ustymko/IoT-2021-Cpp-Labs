class Coordinates
{
    private:
        double coordinate_X, coordinate_Y;
    public:
        double get_coordinate_X(){
            return coordinate_X;
        }
        double get_coordinate_Y(){
            return coordinate_Y;
        }
        void set_coordinates(double coordinate_X, double coordinate_Y){
            this->coordinate_X = coordinate_X;
            this->coordinate_Y = coordinate_Y;
        }  
};