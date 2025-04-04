//Topic 3. Operators of C++
#include <iostream>
#include <cmath>

//Exercise 1
//15)

void task1_15()
{

    int x, y;
    std::cin >> x >> y;

    if (x >= 0 && x < 8 && y >= 0 && y < 8) //if the point is inside the shaded area, print "Yes". 
    {
        std::cout << "Yes";

    }
    else if (x <= 0 && x > -4 && y >= 0 && y < 8)
    {
        std::cout << "Yes";

    }
    else if (x >= 0 && x < 8 && y <= 0 && y > -4)
    {
        std::cout << "Yes";

    }
    else if (x <= -1 && x >= -4 && y <= 8 && y > 0 || x > 0 && x <= 8 && y <= 8 || x > 0 && x <= 8 && y <= 0 && y >= -4) //if the point is at the shaded area border, print "At the border"
    {
        std::cout << "At the border ";

    }
    else //if the point is outside the shaded area, print "No"
    {
        std::cout << "No";
    }
}

 //Exercise 2 
//15) 
void task2_15()
{

    std::cout << "sign: ";
    char sign = std::cin.get();

    if (sign == 'c')
    {

        const auto pi = 3.14;

        std::cout << "radius: ";
        int radius;
        std::cin >> radius;

        int perimeter = 2 * pi * radius;
        int area = pi * pow(radius, 2);

        std::cout << "Perimeter: " << perimeter << '\n';
        std::cout << " Area: " << area << '\n';

    }
    else if (sign == 'r') {

        std::cout << "len: ";
        int length;
        std::cin >> length;
        std::cout << "wid: ";
        int width;
        std::cin >> width;

        int perimeter = 2 * (width + length);
        int area = width * length;

        std::cout << "Perimeter: " << perimeter << '\n';
        std::cout << "Area: " << area << '\n';

    }
    else if (sign == 't') {

        std::cout << "a, b, c: ";
        int a, b, c;
        std::cin >> a >> b >> c;

        int perimeter = a + b + c;
        int p = perimeter / 2;
        int arg = p * (p - a) * (p - b) * (p - c);

        std::cout << "Perimeter: " << perimeter << '\n';

        if (arg <= 0)
        {
            std::cout << "Triangle does not exist!";

        }
        else {
            int area = sqrt(arg);
            std::cout << " Area: " << area << '\n';
        }

    }
    else {
        std::cout << "Parameters are unknown!";
    }
}

//Exercise 3
//15) 
void task3_15()
{
    int A, B;
    std::cin >> A >> B;

    for (int i = A; i < B; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
}

//Exercise 4 
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
void NewPrint(int K, int N)
{
    for (int i = 1; i <= N; ++i)
    {
        std::cout << K << " "; 
    }
        
}

void task4_15()
{
    int numbers_number = 5;

    for (int i = 1; i <= numbers_number; ++i)
    {
        NewPrint(i, i);
        std::cout << "\n";
        NewPrint(0, i);
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

void task5_15()
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
void task6_15()
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
    task1_15();
    task2_15();
    task3_15();
    task4_15();
    task5_15();
    task6_15();

    return 0;
}
