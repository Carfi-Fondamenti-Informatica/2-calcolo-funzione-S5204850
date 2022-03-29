#include <iostream>

int main() {

    float a,b,x,y,z;
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
