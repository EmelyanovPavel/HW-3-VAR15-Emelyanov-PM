// Topic 3. Operators of C++.
#include <iostream>
#include <cmath>

// Exercise 1. 
// Given a point on the plane with coordinates (x, y). Output one of the messages (Yes, No, At the border) depending on whether the point lies inside the shaded area, outside the shaded area, or on its border. 
// Areas are defined graphically as follows:
// 
// 15) y = -x
// A link to the picture: 
// https://private-user-images.githubusercontent.com/35574513/439328361-ddeec275-8696-4afb-8360-38e48b4d8ca1.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NDYwOTE5ODcsIm5iZiI6MTc0NjA5MTY4NywicGF0aCI6Ii8zNTU3NDUxMy80MzkzMjgzNjEtZGRlZWMyNzUtODY5Ni00YWZiLTgzNjAtMzhlNDhiNGQ4Y2ExLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNTA1MDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjUwNTAxVDA5MjgwN1omWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPWFjNGZkMGQyMDc0OWZiMmVmNmY4NDRjYzBhN2M3OGQ4ZGY4NzEwYWQyNWQ2N2QzNDg3NTYwZjg0NTRjYTgyYjUmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0In0.FCx82NZtkscX8eKoeXuR393VXbSYVHeJY48ikl87ah8

void task1()
{
    double r = 100.0;
    const auto eps = 1e-12;

    double x, y;

    std::cout << "Enter the point coordinates (x, y): ";
    std::cin >> x >> y;

    int a = x * x + y * y;
    int b = y + x;

    std::cout << "Answer: ";

    if (fabs(b) < eps && a <= r || fabs(a - r) < eps && 0 <= b) {

        std::cout << "At the border";

    } else if (r < a || b < 0) {

        std::cout << "No";

    } else {

        std::cout << "Yes";
    }

    std::cout << std::endl;
}

//Exercise 2.
// Create a program.
// 
//15) A feature of a geometric shape is given: 
// c - circle; 
// r - rectangle; 
// t - triangle. 
// 
//Display the perimeter and area of a given shape on the screen 
// (request the data required for calculations from the user)

void task2()
{
    char figure;

    double perimeter = 0.0; 
    double area = 0.0;
    const double PI = 3.14;

    std::cout << "Symbol: ";
    std::cin >> figure;

    switch (figure) 
    {

    case 'c':

        double radius;

        std::cout << "Enter a radius: ";
        std::cin >> radius;

        perimeter = 2 * PI * radius;
        area = PI * radius * radius;

        break;

    case 'r':

        double a, b;

        std::cout << "Enter the rectangle sides: ";
        std::cin >> a >> b;

        perimeter = 2 * (a + b);
        area = a * b;

        break;

    case 't':

        double p, x, y, z;

        std::cout << "Enter the triangle sides: ";
        std::cin >> x >> y >> z;

        perimeter = x + y + z;

        p = perimeter / 2; 
        area = sqrt(p * (p - x) * (p - y) * (p - z));

        break;

    default:

        std::cout << "Parameters are unknown!" << std::endl;

    }
    std::cout << "Perimeter = " << perimeter << ", area = " << area << std::endl;
}

// Exercise 3.
// Display on the screen...
// 
// 15) all even numbers in the range from A to B, multiples of three (A <= B)

void task3()
{
    int a, b;

    std::cout << "Enter A and B: \n";
    std::cin >> a >> b;

    std::cout << "Numbers: ";

    for (int i = a; i < b; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

//Exercise 4. 
//Display the numbers in the form of the next tables:
// 
//15)
//1
//0
//2 2
//0 0
//3 3 3
//0 0 0
//4 4 4 4
//0 0 0 0
//5 5 5 5 5
//0 0 0 0 0

void newPrint(int k, int n)
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << k << " ";
    }

}

void task4()
{
    for (int i = 1; i <= 5; ++i)
    {
        newPrint(i, i);
        std::cout << "\n";

        newPrint(0, i);
        std::cout << "\n";
    }
}

//Exercise 5.
// Construct a table of values of the function y=f(x) for x ∈ [a, b] in increments of h. 
// If the function is not defined at some point x, display a message about it.
// 
//15) y = ln|3x|√(2x^5 - 1)

double calculateFunction(double x) 
{
    if (x == 0 || (2 * pow(x, 5) - 1) < 0) 
    {
        return NAN;
    }

    return log(abs(3 * x)) * sqrt(2 * pow(x, 5) - 1);
}

void task5()
{
    double a, b, h;

    std::cout << "Begin of interval (a): ";
    std::cin >> a;

    std::cout << "End of interval (b): ";
    std::cin >> b;

    std::cout << "Step (h): ";
    std::cin >> h;

    if (a >= b)
    {
        std::cout << "Error: the beginning of the interval should be less than the end of the interval." << std::endl;
    }

    std::cout << "Table of function values y = ln|3x|√(2x^5 - 1)" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "x\t\ty" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    for (double x = a; x <= b; x += h)
    {
        double y = calculateFunction(x);

        if (std::isnan(y))
        {
            std::cout << "x = " << x << ": function isn't defined!" << std::endl;

        } else {

            std::cout << std::fixed << "x = " << x << "\ty = " << y << std::endl;
        }
    }

}

//Exercise 6. 
//Construct a table of values of the function y=f(x) for x ∈ [a, b] in increments of h. 
// 
//15)y = {1, if(x - 1) < 1;
//        0, if(x - 1) = 1;
//       -1, if(x - 1) > 1}

void task6()
{

    std::cout << "Table of function values y = {1, if(x - 1) < 1;\n";
    std::cout << "                              0, if(x - 1) = 1;\n";
    std::cout << "                             -1, if(x - 1) > 1}\n\n";

    std::cout << "x\ty\n";
    std::cout << "---\t---\n";

    for (int x = -3; x <= 5; x++) 
    {
        int y;

        if ((x - 1) < 1) 
        {
            y = 1;

        } else if ((x - 1) == 1) {

            y = 0;

        } else {

            y = -1;
        }

        std::cout << x << "\t" << y << std::endl;
    }
}

int main() 
{
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();

    return 0;
}
