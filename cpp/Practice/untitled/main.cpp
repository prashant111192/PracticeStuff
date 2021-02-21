#include <iostream>

using namespace std;

// TypdeDef
typedef unsigned short int USHORT ;

//Declarations
USHORT sum (int, int);
void DataSize();
void Wrap (USHORT);

//#define
#define classes  5;

int main()
{
    int a=1, b=2; // Defining a,b,c
    cout << "Hello World! \nLine 2 \n"; //This is the first time I've properly coded in ages so lets see
    //taking the sum
    USHORT c = sum(a,b);
    int classes_2 = classes
    cout << "Print Sum: " << c << endl<< "Classes: " << classes_2 << endl;

    //Checking the size of various data types
    //DataSize();

    //Wrapping
    Wrap(c);

    return 0;
}

//Definisitons
USHORT sum (int a, int b)
{
    int c;
    c = a + b;
    return c;
}

//Checking the size of various data types
void DataSize()
{

    cout << "Printing data sizes \n";
    cout << "int: " << sizeof(int) << ", double: "<< sizeof(double) <<", short: "<< sizeof(short) <<", long: "<< sizeof (long)<< ", char: "<< sizeof (char)<< ", bool: "<< sizeof (bool)<< ", float: " <<sizeof (float) << endl;
}

//Showcasing wrapping of datatypes
void Wrap (USHORT c)
{
    c = 65535;
    cout << c << endl;
    c++;
    cout << c << endl;
    c++;
    cout << c << endl;
}
