#include <iostream>
int count = 0;
class num
{
public:
    num()
    {
        count++;
        std::cout << "This is the time when constrictor called for object numer : " << count << std::endl;
    }

    ~num(){
        std::cout<<"This is the time when destructor callled for object number : "<<count<<std::endl;
        count--;
    }
};
int main(void)
{
   num objOne;
   num objTwo;
}