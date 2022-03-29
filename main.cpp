#include <iostream>

int main() {

    float a=0; float b=0; float x=0; float y=0; int z=0;
    std::cin>>x>>y>>a>>b;
    if(x<0 && y>0){
       float z=a*x-b*y;
        std::cout<<z<<std::endl;
    }
    else if (x>=0 && y<=0){
        float z=a*x*x-b*y;
        std::cout<< z<<std::endl;
    }
    else {
        float z=a*x+b*y*y;
        std::cout<<z<<std::endl;
    } return 0;

}
