// TypdeDef
typedef unsigned short int USHORT;

//Declarations
USHORT sum(int, int);
void DataSize();
void Wrap(USHORT);

//#define
#define classes 5;

// const
const int studentsperclass = 6;

class Cat
{
    public:
        Cat(int age) { cAge = age; }
        ~Cat() {}
        void cPrint() const;
        void cSetAge(int age);

    private:
        int cAge;
};