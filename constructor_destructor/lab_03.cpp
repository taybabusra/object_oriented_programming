    #include<iostream>
    using namespace std;
    class Rectangle
    {
    private:
        double length;
        double height;
    public:
        Rectangle(double len,double hgt)
        {
            length = len;
            height = hgt;
        }
        double calculateArea()
        {
            return length*height;
        }
    };
    int main()
    {
        Rectangle rect1(10.5,8.6);
        Rectangle rect2(8.5,6.3);

        cout<<"Area of the rectangle 1"<<rect1.calculateArea()<<endl;
        cout<<"Area of the Rectangle 2"<<rect2.calculateArea();
        return 0;
    }
