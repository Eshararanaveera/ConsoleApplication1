// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct circle {
    float radius;
};
struct rectangle {
    float length;
    float width;
};
struct square {
    float length;
};

float circlearea(struct circle c);
float rectanglearea(struct rectangle r);
float squarearea(struct square s);

int main()
{
    struct circle cl;
    cl.radius = 5;

    struct rectangle r1, r2;
    r1.length = 28;
    r1.width = 15;
    r2.length = 7;
    r2.width = 3;

    struct square s1;
    s1.length = 4;

    float circle_area = circlearea(cl);
    float squareare = squarearea(s1);
    float rectangle_earea = rectanglearea(r2);
    float rectangle_eareal = rectanglearea(r1);

    float green = rectangle_eareal - (circle_area + squareare + rectangle_earea);

    cout << "green area :" <<// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

    struct circle {
        float radius;
    };
    struct rectangle {
        float length;
        float width;
    };
    struct square {
        float length;
    };

    float circlearea(struct circle c);
    float rectanglearea(struct rectangle r);
    float squarearea(struct square s);

    int main()
    {
        /* float radius;
         float length, width;
         float slength;

         cout << "enter the radius" << endl;
         cin >> radius;

         cout << "enter the rectangle length ";
         cin >> length;

         cout << "enter the width";
         cin >> width;

         cout << "enter the square";
         cin >> slength;

         float circlearea(struct circle c);
         float rectanglearea(struct rectangle r);
         float squarearea(struct square s);
     */
        struct circle c1;
        c1.radius = 5;

        struct rectangle r1, r2;
        r1.length = 28;
        r1.width = 15;
        r2.length = 7;
        r2.width = 3;

        struct square s1;
        s1.length = 4;

        float circle_area = circlearea(c1);
        float squareare = squarearea(s1);
        float rectangl_earea = rectanglearea(r2);
        float rectangl_eareaL = rectanglearea(r1);

        float green = rectangl_eareaL - (circle_area + squareare + rectangl_earea);

        cout << "green area :" << green << endl;



    }

    float circlearea(struct circle c) {

        return 22.0 / 7 * c.radius * c.radius;
    }

    float rectanglearea(struct rectangle r) {

        return r.length * r.width;
    }

    float squarearea(struct square s) {

        return s.length * s.length;
    }



    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu

    // Tips for Getting Started: 
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    green << endl;


}
