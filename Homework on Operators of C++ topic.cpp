#include <iostream>
#include <cmath>

// Exercise 1. 
// Given a point on the plane with coordinates (x, y). Output one of the messages (Yes, No, At the border) depending on whether the point lies inside the shaded area, outside the shaded area, or on its border. 
// The area is represented as follows:
// Option 15. y = -x
// link to the picture: 
// https://private-user-images.githubusercontent.com/35574513/439328361-ddeec275-8696-4afb-8360-38e48b4d8ca1.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NDYwOTE5ODcsIm5iZiI6MTc0NjA5MTY4NywicGF0aCI6Ii8zNTU3NDUxMy80MzkzMjgzNjEtZGRlZWMyNzUtODY5Ni00YWZiLTgzNjAtMzhlNDhiNGQ4Y2ExLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNTA1MDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjUwNTAxVDA5MjgwN1omWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPWFjNGZkMGQyMDc0OWZiMmVmNmY4NDRjYzBhN2M3OGQ4ZGY4NzEwYWQyNWQ2N2QzNDg3NTYwZjg0NTRjYTgyYjUmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0In0.FCx82NZtkscX8eKoeXuR393VXbSYVHeJY48ikl87ah8

void task1()
{
    constexpr auto rr = 100;
    constexpr auto eps = 1e-12; //the eps constant equal to 1e-12 is used to check for zero so as not to divide by 0
    
    double x, y;
    std::cin >> x >> y;
    
    const auto a = x * x + y * y;
    const auto b = y + x;
    
    if (fabs(b) < eps && a <= rr || fabs(a - rr) < eps && 0 <= b) {
        std::cout << "At the border";
    } else if (rr < a || b < 0) {
        std::cout << "No";
    } else {
        std::cout << "Yes";
    }
    
    std::cout << std::endl; 
    //all code works correctly
}

//Exercise 2 
//15) A feature of a geometric shape is given: c is a circle, r is a rectangle, t is a triangle. 
//Display the perimeter and area of a given shape on the screen (request the data required for 
//calculations from the user)

void task2()
{
    char figure;
    double perimeter = 0.0;
    double area = 0.0;
    const double PI = 3.14;

    std::cout << "Symbol: ";
    std::cin >> figure;

    switch (figure) {
    case 'c':
        //declaring the data for entering
        double radius;
        std::cout << "Radius: ";
        std::cin >> radius;

        //calculating a perimeter and area
        perimeter = 2 * PI * radius;
        area = PI * radius * radius;
        break;

    case 'r':
        //declaring the data for entering
        double a, b;
        std::cout << "Rectangle sides: ";
        std::cin >> a >> b;

        //calculating a perimeter and area
        perimeter = 2 * (a + b);
        area = a * b;
        break;

    case 't':
        //declaring the data for calculations and entering
        double p, x, y, z;
        std::cout << "Triangle sides: ";
        std::cin >> x >> y >> z;

        //calculating a perimeter and area
        perimeter = x + y + z;
        p = perimeter / 2; //calculating a semiperimeter
        area = sqrt(p * (p - x) * (p - y) * (p - z));
        break;
        

    default:
        std::cout << "Parameters are unknown!" << std::endl;

    }
    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;
}

// Exercise 3 - Display on the screen...
// 15) all even numbers in the range from A to B, multiples of three (A <= B)

void task3()
{
    int a, b;
    std::cin >> a >> b;
    
    std::cout << "FOR...\n";
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    
    int i2 = a;
    std::cout << "\nWHILE...\n";
    while(i2 <= b) {
        if(i2 % 3 == 0 && i2 % 2 == 0) {
            std::cout << i2 << " ";
        }
        i2++;
    }
    
    int i3 = a;
    std::cout << "\nDO... WHILE...\n";
    do {
        if(i3 % 3 == 0 && i3 % 2 == 0) {
            std::cout << i3 << " ";
        }
        i3++;
        
    } while(i3 <= b);
    std::cout << std::endl;
}

//Exercise 4. Display the numbers in the form of the following tables
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
    int numbers_number = 5;

    for (int i = 1; i <= numbers_number; ++i)
    {
        newPrint(i, i);
        std::cout << "\n";
        newPrint(0, i);
        std::cout << "\n";
    }
}

//Exercise 5
//15) y = ln|3x|√(2x^5 - 1)

double calculateFunction(double x) {
    if (x == 0 || (2 * pow(x, 5) - 1) < 0)
        return NAN; 

    return log(fabs(3 * x)) * sqrt(2 * pow(x, 5) - 1);
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
        }
        else {
            std::cout << std::fixed << "x = " << x << "\ty = " << y << std::endl;
        }
    }

}

//Exercise 6 
//15)y = {1, if(x - 1) < 1;
//        0, if(x - 1) = 1;
//        -1, if(x - 1) > 1}

void task6()
{

    std::cout << "Table of function values y = {1, if(x - 1) < 1;\n";
    std::cout << "                              0, if(x - 1) = 1;\n";
    std::cout << "                             -1, if(x - 1) > 1}\n\n";

    std::cout << "x\ty\n";
    std::cout << "---\t---\n";

    for (int x = -3; x <= 5; x++) {
        int y;

        if ((x - 1) < 1) {
            y = 1;
        }
        else if ((x - 1) == 1) {
            y = 0;
        }
        else {
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
