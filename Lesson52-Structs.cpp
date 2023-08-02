#include <iostream>
#include <string>

//an array stores multiple data of the same datatype,
//a struct stores multiple data of multiple datatypes,
//variables in a struct are called members
//structs are like a datatype
//. is the Class Member Access Operator

struct student{
    std::string name;
    double gpa;
    bool enrolled = true; //default value

};

int main(){

    student Spongebob;
    Spongebob.name = "Spongebob";
    Spongebob.gpa = 1.4;
    Spongebob.enrolled = false;

    student Squidward;
    Squidward.name = "Squidward";
    Squidward.gpa = 3.6;

    std::cout << Spongebob.name << '\n' << Spongebob.gpa << '\n' << Spongebob.enrolled << '\n';
    std::cout << Squidward.name << '\n' << Squidward.gpa << '\n' << Squidward.enrolled << '\n';


    return 0;
}