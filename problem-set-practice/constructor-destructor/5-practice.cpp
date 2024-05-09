#include <iostream>
// Create a class to represent a student with constructors and a destructor.
class Student{
    private:
    std::string stu_name;
    int class_name;
    public:
    Student(std::string a, int b){
        stu_name = a;
        class_name =b;
    };

    ~Student(){

        std::cout<<"Now memory freed"<<std::endl;
    }
};
int main(){
    Student student_one("Kailash", 12);
    
    return 0;
}