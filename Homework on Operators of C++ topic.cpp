//Topic 3. Operators of C++
#include <iostream>
#include <cmath>

//Exercise 1
//15)

void task1()
{

    int x, y;
    std::cin >> x >> y;

    if (x >= 0 && x < 8 && y >= 0 && y < 8) //if the point is inside the shaded area, print "Yes". 
    {
        std::cout << "Yes\n";

    }
    else if (x <= 0 && x > -4 && y >= 0 && y < 8)
    {
        std::cout << "Yes\n";

    }
    else if (x >= 0 && x < 8 && y <= 0 && y > -4)
    {
        std::cout << "Yes\n";

    }
    else if (x <= -1 && x >= -4 && y <= 8 && y > 0 || x > 0 && x <= 8 && y <= 8 || x > 0 && x <= 8 && y <= 0 && y >= -4) //if the point is at the shaded area border, print "At the border"
    {
        std::cout << "At the border\n";

    }
    else //if the point is outside the shaded area, print "No"
    {
        std::cout << "No\n";
    }
}

//Exercise 2 
// 15) 

void task2()
{

    char figure;
    double radius, length, width, side1, side2, side3, p, circlePerimeter, circleArea, rectanglePerimeter, rectangleArea, trianglePerimeter, triangleArea;
    const double PI = 3.14;
    
    std::cout << "Symbol: ";
    std::cin >> figure;
    
    switch (figure) {
        case 'c':
        std::cout << "\nradius: ";
        std::cin >> radius;
            
        circlePerimeter = 2 * PI * radius;
        circleArea = PI * radius * radius;
            
        std::cout << "\nperimeter: " << circlePerimeter << std::endl;
        std::cout << "area: " << circleArea << std::endl;
        break;
            
        case 'r':
        std::cout << "\nlength: ";
        std::cin >> length;
        std::cout << "\nwidth: ";
        std::cin >> width;
            
        rectanglePerimeter = 2 * (length + width);
        rectangleArea = length * width;
            
        std::cout << "\nperimeter: " << rectanglePerimeter << std::endl;
        std::cout << "area: " << rectangleArea << std::endl;
        break;
            
        case 't':
        std::cout << "\nsides: ";
        std::cin >> side1 >> side2 >> side3;
            
        trianglePerimeter = side1 + side2 + side3;
        p = trianglePerimeter / 2;
        triangleArea = sqrt(p * (p - side1) * (p - side2) * (p - side3));
            
        std::cout << "\nperimeter: " << trianglePerimeter << std::endl;
        std::cout << "area: " << triangleArea << std::endl;
        break;
            
        default:
        std::cout << "\nParameters are unknown" << std::endl;
        break;
    }
        
    
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
