////Topic 3. Operators of C++
////Exercise 1
////15)
// 
//#include <iostream>
//
//using namespace std;
//
//void task1_15()
//{
//
//    int x, y;
//    cin >> x >> y;
//
//    if (x >= 0 && x < 8 && y >= 0 && y < 8) //if the point is inside the shaded area, print "Yes". 
//    {
//        cout << "Yes";
//
//    }
//    else if (x <= 0 && x > -4 && y >= 0 && y < 8)
//    {
//        cout << "Yes";
//
//    }
//    else if (x >= 0 && x < 8 && y <= 0 && y > -4)
//    {
//        cout << "Yes";
//
//    }
//    else if (x <= -1 && x >= -4 && y <= 8 && y > 0 || x > 0 && x <= 8 && y <= 8 || x > 0 && x <= 8 && y <= 0 && y >= -4) //if the point is at the shaded area border, print "At the border"
//    {
//        cout << "At the border ";
//
//    }
//    else //if the point is outside the shaded area, print "No"
//    {
//        cout << "No";
//    }
//}
//
//int main()
//{
//
//    task1_15();
//    return 0;
//}
 


////Exercise 2 
////15) 
// 
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//void task2_15()
//{
//
//    cout << "sign: ";
//    char sign = cin.get();
//
//    if (sign == 'c')
//    {
//
//        const auto pi = 3.14;
//
//        cout << "radius: ";
//        int radius;
//        cin >> radius;
//
//        int perimeter = 2 * pi * radius;
//        int area = pi * pow(radius, 2);
//
//        cout << "Perimeter: " << perimeter << '\n';
//        cout << " Area: " << area << '\n';
//
//    }
//    else if (sign == 'r') {
//
//        cout << "len: ";
//        int length;
//        cin >> length;
//        cout << "wid: ";
//        int width;
//        cin >> width;
//
//        int perimeter = 2 * (width + length);
//        int area = width * length;
//
//        cout << "Perimeter: " << perimeter << '\n';
//        cout << "Area: " << area << '\n';
//
//    }
//    else if (sign == 't') {
//
//        cout << "a, b, c: ";
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        int perimeter = a + b + c;
//        int p = perimeter / 2;
//        int arg = p * (p - a) * (p - b) * (p - c);
//
//        cout << "Perimeter: " << perimeter << '\n';
//
//        if (arg <= 0)
//        {
//            cout << "Triangle does not exist!";
//
//        }
//        else {
//            int area = sqrt(arg);
//            cout << " Area: " << area << '\n';
//        }
//
//    }
//    else {
//        cout << "Parameters are unknown!";
//    }
//}
//
//int main()
//{
//    task2_15();
//    return 0;
//}



////Exercise 3
////15)
// 
//#include <iostream>
//
//using namespace std;
//
//void task3_15()
//{
//    int A, B;
//    cin >> A >> B;
//
//    for (int i = A; i < B; i++)
//    {
//        if (i % 3 == 0 && i % 2 == 0)
//        {
//            cout << i << " ";
//        }
//    }
//}
//
//int main() 
//{
//    task3_15();
//    return 0;
//}
 


////Exercise 4 
////15)
////1
////0
////2 2
////0 0
////3 3 3
////0 0 0
////4 4 4 4
////0 0 0 0
////5 5 5 5 5
////0 0 0 0 0
//
//#include <iostream>
//
//using namespace std;
//
//
//void NewPrint(int K, int N)
//{
//    for (int i = 1; i <= N; ++i)
//    {
//        cout << K << " "; 
//    }
//        
//}
//
//void task4_15()
//{
//    int numbers_number = 5;
//
//    for (int i = 1; i <= numbers_number; ++i)
//    {
//        NewPrint(i, i);
//        cout << "\n";
//        NewPrint(0, i);
//        cout << "\n";
//    }
//}
//
//int main()
//{
// 
//    task4_15();
//    return 0;
//}
 


////Exercise 5
////15) y = ln|3x|√(2x^5 - 1)
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
// 
//using namespace std;
//
//double calculateFunction(double x) {
//    if (x == 0 || (2 * pow(x, 5) - 1) < 0)
//        return NAN; 
//
//    return log(fabs(3 * x)) * sqrt(2 * pow(x, 5) - 1);
//}
//
//void task5_15()
//{
//    double a, b, h;
//
//    cout << "Begin of interval (a): ";
//    cin >> a;
//    cout << "End of interval (b): ";
//    cin >> b;
//    cout << "Step (h): ";
//    cin >> h;
//
//    if (a >= b)
//    {
//        cout << "Error: the beginning of the interval should be less than the end of the interval." << endl;
//    }
//
//    cout << "Table of function values y = ln|3x|√(2x^5 - 1)" << endl;
//    cout << "-----------------------------------------" << endl;
//    cout << "x\t\ty" << endl;
//    cout << "-----------------------------------------" << endl;
//
//    for (double x = a; x <= b; x += h)
//    {
//        double y = calculateFunction(x);
//
//        if (isnan(y))
//        {
//            cout << "x = " << x << ": function isn't defined!" << endl;
//        }
//        else {
//            cout << fixed << setprecision(3)
//                << "x = " << x << "\ty = " << y << endl;
//        }
//    }
//
//}
//
//int main() 
// {
//    task5_15();
//    
//    return 0;
//}



////Exercise 6 
////15)y = {1, if(x - 1) < 1;
////        0, if(x - 1) = 1;
////        -1, if(x - 1) > 1}
//
//#include <iostream>
//using namespace std;
//
//void task6_15()
//{
//
//    cout << "Table of function values y = {1, if(x - 1) < 1;\n";
//    cout << "                              0, if(x - 1) = 1;\n";
//    cout << "                             -1, if(x - 1) > 1}\n\n";
//
//    cout << "x\ty\n";
//    cout << "---\t---\n";
//
//    for (int x = -3; x <= 5; x++) {
//        int y;
//
//        if ((x - 1) < 1) {
//            y = 1;
//        }
//        else if ((x - 1) == 1) {
//            y = 0;
//        }
//        else {
//            y = -1;
//        }
//
//        cout << x << "\t" << y << endl;
//    }
//}
//
//int main() 
//{
//
//    task6_15();
//    return 0;
//}
