#include <iostream>
#include <string>

    //constructors are special methods in a class that is auto called when an aboject is instantiated
    //useful for assigning to attributes as arguments

class Student{
    public:
        std::string name= "Sbongepop";
        int age = 17;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;  //invece di usare this->, basta chiamare gli argomenti con un nome diverso in fase di dichiarazione
    }

};

int main(){

    Student student1("Sbongepop", 28, 2.1);
    Student student2("Partick", 45, 0.1);
    Student student3("Sadny", 19, 4.0);

    std::cout <<student1.name <<'\n' << student1.age << '\n'<< student1.gpa << '\n';
    std::cout <<student2.name <<'\n' << student2.age << '\n'<< student2.gpa << '\n';
    std::cout <<student3.name <<'\n' << student3.age << '\n'<< student3.gpa << '\n';
    
    
    
    return 0;
}