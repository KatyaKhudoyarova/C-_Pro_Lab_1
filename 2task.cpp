#include <iostream>
#include <iomanip>


int main() {
   float v=1.067;
   int k;
   std::cout<<"Enter quantity of versta:";
   std::cin>>k;
   float a=v*k;
   std::cout<<"The result is:"<<std::setprecision(4)<<a;
    return 0;
}

