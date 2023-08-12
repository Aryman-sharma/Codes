#include <iostream>
using namespace std;

class animal
{
private:
    int weight;

public:
    int age;
    string name;

    void sleep()
    {
        cout << "sleeping" << endl;
    }

    void eat()
    {
        cout << "eating" << endl;
    }

    int getweight()
    {
        return weight;
    }

    void setweight(int weight)
    {
        this->weight = weight;
    }

    // constructor  --> " constructors are used to initialise the states or elements of the class "

    // types

    // 1)  default constructor

    animal()
    {
        // jab bhi ham class ke elements clss me hi use krete
        // hai to this keyword ka use karte ha
        // to avod confusion;

        cout << "constructor called" << endl;
        this->weight = 0;
        this->age = 0;
        this->name = "Aryman";
    }

    // 2) parameterised constructor

    animal(int age)
    {
        this->age = age;
        cout << "parametre constructor called 1 " << endl;
    }

    animal(int age, int weight)
    {
        this->weight = weight;
        this->age = age;

        cout << "parametre constructor called 2 " << endl;
    }

    animal(int age, int weight, string name)
    {
        this->weight = weight;
        this->age = age;
        this->name = name;
        cout << "parametre constructor called 3 " << endl;
    }

    // copy constructor

    animal(animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "insode copy constructor" << endl;
    }

    void print()
    {
        cout << this->age << " " << this->name << endl;
    }

    // destructos

    ~animal()
    {
        cout << "i am inside destructor" << endl;
    }
};

int main()
{

    cout << " size of empty class " << sizeof(animal) << endl;

    // object creation

    // static object craetion
    animal ramesh;

    // initialisation using dot opeartor

    ramesh.age = 12;
    ramesh.name = "lion";

    // acccess using dot operator

    cout << "the age of rmaesh is " << ramesh.age << endl;
    cout << "the name of rmaesh is " << ramesh.name << endl;

    ramesh.eat();
    cout << endl;
    ramesh.sleep();

    // getters and setters
    // to access private values

    ramesh.setweight(101);
    cout << "weight of ramesh is " << ramesh.getweight() << endl;

    //// dynamically object craetion

    animal *suresh = new animal;

    // how to add values
    // meethod 1

    (*suresh).age = 15;
    (*suresh).name = "billi";

    // metj=hod 2

    suresh->age = 17;
    suresh->name = "banana";

    cout << suresh->age << endl;
    cout << suresh->name << endl;

    suresh->eat();
    cout << endl;
    suresh->sleep();

    // //   // print function chceck
    // //    animal a(10,20,"aryman");

    // //    animal b(a);
    // //    a.print();
    // //    b.print();

    // //  // output 1

    // // //   10 aryman
    // // //   10 aryman
    // // /////////////////////////////////////

    // //    // but if we do
    // //    a.name[0]='s';

    // //    // and now print the output

    // //    a.print();
    // //    b.print();

    // // // output 2

    // // // 10 sryman
    // // // 10 aryman

    // // // only a change even though we have copied a into b

    //     cout<<"a object creation"  <<endl;
    //     animal a;

    //     cout<<" b bject created;"<<endl;
    //     animal *b=new animal;

    //  /// manually for b

    //  delete b;

    //////////////////////////////////***************************************************************************************************************************************/************************************************

    return 0;
}