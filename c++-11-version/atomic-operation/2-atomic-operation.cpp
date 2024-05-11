#include <iostream>
#include <atomic>
#include <thread>

//atomic integer variable
std::atomic<int> counter(0);

//function for increament counter variables
void increament_counter(int id){
    for(int i=0; i<10000; i++){
        counter.fetch_add(1);
    }
}

int main(){
    std::thread thread_one(increament_counter, 1);
    std::thread thread_two(increament_counter, 2);

    thread_one.join();
    thread_two.join();

    std::cout<<counter.load()<<std::endl;
    return 0;
}