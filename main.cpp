#include <iostream>

int main() {

    float a=0; float b=0; float x=0; float y=0; float z=0;
    std::cin>>x>>y>>a>>b;
    if(x<0 && y>0){
         z=a*x-b*y;
        std::cout<<z<<std::endl;
    }
    else if (x>=0 && y<=0){
        z=a*x*x-b*y;
        std::cout<< z<<std::endl;
    }
    else {
         z=a*x+b*y*y;
        std::cout<<z<<std::endl;
    } return 0;

}
