#include <iostream>

namespace student_data
{
    class course
    {
    private:
        std::string course_name;
        std::string course_info;
        double course_price;

    public:
        void add_course()
        {
            std::cout << "Course added" << std::endl;
        }
    };

    namespace examData
    {
        class mainExam
        {
        private:
            std::string student_name;
            int total_marks;

        public:
            void showStudentMarks()
            {
                std::cout << "SHow student marks function" << std::endl;
            }
        };
    };
};

int main()
{

    student_data::course courseOne;
    courseOne.add_course();
    // nested namespace
    student_data::examData::mainExam stu_one;
    stu_one.showStudentMarks();
    return 0;
}