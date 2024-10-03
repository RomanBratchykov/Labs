#include <iostream>

int main(){
    double x, y;
    std::cout<< "enter two numbers:\n";
    std::cin>>x;
    std::cin>>y;
    if(x>y){

        std::cout<<"x higher than y\n";
    }
    else if(x<y){

        std::cout<<"y higher than x\n";
    }
    else{

        std::cout<<"They`re equal\n";
    }


    return 0;
}