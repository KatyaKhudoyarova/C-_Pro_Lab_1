#include <iostream>


int main() {
    int hryvnas;
    int cops;
    std::cout<<"Enter hryvnas:";
    std::cin>>hryvnas;
    std::cout<<"Enter cops:";
    std::cin>>cops;
    int sum =(hryvnas+(cops/100));
    std::cout<<"The sum is:"<<sum<<"."<<cops%100;
    return 0;
}

