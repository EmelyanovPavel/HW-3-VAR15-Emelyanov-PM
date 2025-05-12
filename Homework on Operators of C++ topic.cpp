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
    const double radius_squared = 100.0; 
    constexpr double eps = 1e-12; 
    
    double x, y; 
    std::cout << "Enter the point coordinates (x, y): ";
    std::cin >> x >> y; 
    
    const double sum1 = x * x + y * y; 
    const double sum2 = y + x; 

    std::cout << "\nAnswer: \n";
    
    if (fabs(sum2) < eps && sum1 <= radius_squared || fabs(sum1 - radius_squared) < eps && 0 <= sum2) {
        
        std::cout << "On the border"; 
        
    } else if (radius_squared < sum1 || sum2 < 0) {
        
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
    double perimeter, area, semiperimeter = 0.0;
    const double PI = 3.14;
    
    std::cout << "Enter a symbol: ";
    std::cin >> figure;
    
    switch(figure) 
    {
        case 'c':
        double radius;
        
        std::cout << "Enter a radius: ";
        std::cin >> radius;
        
        perimeter = 2 * PI * radius;
        area = PI * radius * radius;
        
        break;
            
        case 'r':
        double side_a, side_b;
        
        std::cout << "Enter the rectangle sides: ";
        std::cin >> side_a >> side_b;
        
        perimeter = 2 * (side_a + side_b);
        area = side_a * side_b;
        
        break;
            
        case 't':
        double side_x, side_y, side_z;
        
        std::cout << "Enter the triangle sides: ";
        std::cin >> side_x >> side_y >> side_z;
        
        perimeter = side_x + side_y + side_z;
        semiperimeter = perimeter / 2; //calculating a semiperimeter
        area = sqrt(semiperimeter * (semiperimeter - side_x) * (semiperimeter - side_y) * (semiperimeter - side_z));
        
        break;
            
        default:
        std::cout << "The parameters are unknown!" << std::endl;
        
    }
    
    std::cout << "Perimeter = " << perimeter << ", area = " << area << std::endl;
}

// Exercise 3.
// Display on the screen...
// 
// 15) all even numbers in the range from A to B, multiples of three (A <= B)

void task3()
{
    int begin, end;
    std::cin >> begin >> end;
    
    std::cout << "FOR...\n";
    for (int i = begin; i <= end; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    
    int i2 = begin;
    
    std::cout << "\nWHILE...\n";
    while(i2 <= end) {
        if(i2 % 3 == 0 && i2 % 2 == 0) {
            std::cout << i2 << " ";
        }
        i2++;
    }
    
    int i3 = begin;
    
    std::cout << "\nDO... WHILE...\n";
    do {
        if(i3 % 3 == 0 && i3 % 2 == 0) {
            std::cout << i3 << " ";
        }
        i3++;
        
    } while(i3 <= end);
    
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
