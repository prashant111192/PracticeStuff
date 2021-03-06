﻿#include <iostream>

#include "main.hpp"

using namespace std;

inline void Cat::cPrint() const
{
    cout << cAge << endl
         << "Hey hay" << endl;
}

void Cat::cSetAge(int age)
{
    cout << "Setting age :";
    cAge = age;
}

int main()
{
    int a = 1, b = 2;                   // Defining a,b,c
    cout << "Hello World! \nLine 2 \n"; //This is the first time I've properly coded in ages so lets see
    //taking the sum
    USHORT c = sum(a, b);
    enum Color
    {
        red,
        green = 100,
        blue
    };
    int classes_2 = classes int totalStudents;
    totalStudents = classes_2 * studentsperclass;
    cout << "Print Sum: " << c << endl
         << "Classes: " << classes_2 << endl
         << "Total Studnets: " << totalStudents << endl;
    cout << Color(red) << Color(blue) << endl;

    //Checking the size of various data types
    //DataSize();

    //Wrapping
    if (c != 0)
    {
        Wrap(c);
    }

    //Classes
    cout << "classes\n";
    Cat apple(1);
    apple.cPrint();
    apple.cSetAge(2);
    apple.cPrint();

    return 0;
}

//Definisitons
USHORT sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

//Checking the size of various data types
void DataSize()
{

    cout << "Printing data sizes \n";
    cout << "int: " << sizeof(int) << ", double: " << sizeof(double) << ", short: " << sizeof(short) << ", long: " << sizeof(long) << ", char: " << sizeof(char) << ", bool: " << sizeof(bool) << ", float: " << sizeof(float) << endl;
}

//Showcasing wrapping of datatypes
void Wrap(USHORT c)
{
    c = 65535;
    cout << c << endl;
    c++;
    cout << c << endl;
    c++;
    cout << c << endl;
}
