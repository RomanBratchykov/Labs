#include <iostream>
#include <cmath>
#include <string> 

double x, y, z, x1, y2, z1;
int var;
void sin(double x, double y){
    std::cout<<"enter two numbers\n";
    std::cin>>x>>y;
    std::cout<<(y=pow(x, 3) - 4*pow(x,2) - 5*x + cos(x))<<'\n';
}
void cub(double x){
    std::cout<<"Enter size of edge: \n";
    std::cin>> x ;
    std::cout<<"volume of your cube is: "<<pow(x, 3)<<"  Full area is:" << pow(x, 2)*6<<"\n";}
void tri(double x, double y){
    std::cout<<"Enter two cathetus\n";
    std::cin>>x;
    std::cin>>y;
    std::cout<<"Hipothenuse is: "<<sqrt(pow(x, 2)+pow(y, 2))<< "  Area of triangle is:"<< (x * y)/2<<"\n";}
void par(double x, double y, double z){
    std::cout<<"Enter three edges of parallelogram:\n";
    std::cin>>x>>y>>z;
    std::cout<<"Volume is: "<<x*y*z<< "  Full area is:"<<((x*y)+(x*z)+(z*y))*2<<"\n";

}
void coor(double x, double y, double z, double x1, double y1, double z1){
    std::cout<<"Enter six values, first two is coordinates of A, next two is B and last two is C(one in coordinates is 1 sm)\n";
    std::cin>> x >> y >> z >> x1 >> y1 >> z1;
    double AB = sqrt(pow((z-x), 2)+ pow((x1-y), 2));
    double BC = sqrt(pow((y1-z), 2)+ pow((z1-x1), 2));
    double AC = sqrt(pow((y1-x), 2)+ pow((z1-y), 2));
    double p = (AB+BC+AC)/2;
    std::cout<<"perimetr is:"<< AB+BC+AC<< " area is:"<< sqrt(p*(p-AB)*(p-BC)*(p-AC))<<"\n";

};
void days2(int var) {
    std::cout<<"enter number 1-365\n";
    std::cin>>var;
    if(var>0 && var<=365){
        std::cout<<"day is:"<< (var%7)+1<<"\n";
    }
    else{
        std::cout<<"Enter valid number";
    }
}
void days(int var){
    std::cout<<"Enter number 1-365\n";
    std::cin>>var;
    if(var>0 && var <=365 && var%7==0 ){
        std::cout<<"its monday, 1\n";
    }
    else if(var>0 && var <=365 && (var-1)%7 == 0){
        std::cout<<"Its tuesday, 2\n";
    }
    else if(var>0 && var <=365 && (var-2)%7 == 0){
        std::cout<<"Its wednesday, 3\n";
    }
    else if(var>0 && var <=365 && (var-3)%7 == 0){
        std::cout<<"Its thursday, 4\n";
    }
    else if(var>0 && var <=365 && (var-4)%7 == 0){
        std::cout<<"Its friday, 5\n";
    }
    else if(var>0 && var <=365 && (var-5)%7 == 0){
        std::cout<<"Its saturday, 6\n";
    }
    else if(var>0 && var <=365 && (var-6)%7 == 0){
        std::cout<<"Its sunday, 7\n";
    }
    else  {
        std::cout<<"Enter valid number\n";
    }
}
void nums(int var){
    std::cout<<"Enter three-digits number:\n";
    std::cin>>var;
    std::string s = std::to_string(var);
     char ch = s[2];
    s.insert(0, 1, ch);
    s.erase(3);
    std::cout<<s<<"\n";
}
int main(){
    int vari;
    do{
    std::cout<<"Each number shows the task, enter number 1-8(8 is task 7 but with writing what day it is)\n";
    std::cin>>vari;
    switch (vari){
    case 1:
        sin(x,y);
        break;
    case 2:
        cub(x);
        break;
    case 3:
        tri(x , y);
        break;
    case 4:
        nums(var);
        break;
    case 5:
        par(x, y, z);
        break;
    case 6:
        coor(x, y, z, x1, y2, z1);
        break;
    case 7:
        days2 (x);
        break;
    case 9:
        days(x);
        break;
    default:
        std::cout<<"Wrong option \n";
        break;
    }
    }
    while(1);
    


    return 0;
}