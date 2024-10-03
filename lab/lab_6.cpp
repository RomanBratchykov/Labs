#include <iostream>
#include <cmath>
#include <string>
#include <locale>
#include <vector>

int x, y, z;
void fun1(int x) {
    std::cout << "Введіть А(число має бути більше 15)\n";
    std::cin >> x;

    if (x>15) {
        while (x>10){
            if (x%2 == 1){
                std::cout<<pow(x, 2)<<"\n";
            }
            else{  
            }
            x--;
        }
    }
    else{
        std::cout<<"Число менше 15\n";
    }
    
}   
void fun2(int x) {
    std::cout << "Введфть число від 1 до 10\n";
    std::cin >> x;
    if (x > 1 && x < 10) {
        int i;
        for(i = 1; i<10; i++){
            std::cout<<"Таблиця множення:\n";
            std::cout<<i<<" * "<<x<<" = "<<i*x<<"\n";
        }
    }
    else {
        std::cout << "Введіть число в діапазоні від 1 до 10\n";
    }
}
void fun3(int x, int y, int z){
        std::cout<<"Введіть початок числення а\n";
        std::cin>>x;
        std::cout<<"Введіть кінець числення b\n";
        std::cin>>y;
        std::cout<<"Введіть крок h\n";
        std::cin>>z;
        int i;
        double sum;
        i = 0;
        sum = 0;
        std::vector<int> v;
        for(i = x+1; i < y; i+=z){
        v.push_back(i);
        sum+=i;}
        double num = v.size();   
        std::cout<<"Середнє арифметичне від "<<x<<" до "<<y<<" з кроком "<<z<<" = "<<sum/num<<"\n";
        }
void fun4(int x, int y) {
    std::cout<<"Введіть два значення\n";
    std::cin>>x>>y;
    int sum = 0;
    for(int i = 0; i<y; i++){
        sum+=x;
    }
    std::cout<<"Добуток за сумою = "<<sum<<"\n";
    
}
void fun5(int x){
    std::cout<<"Введіть число яке бажаєте піднести до квадрату\n";
    std::cin>>x;
    int sum = 0;
    for(int i = 1; i <= x; i++){
        sum+=(2*i-1);
    }
    std::cout<<"Ваш квадрат = "<<sum<<"\n";
        
    }
void fun6(double x, double y, int z){
    std::cout<<"Введіть початок числення а\n";
    std::cin>>x;
    std::cout<<"Введіть кінець числення b\n";
    std::cin>>y;
    std::cout<<"Числа кратні 3 і некратні 5 \n";
    for(int i = x; i<y; i++){
        if(i%3 == 0 && i%5!=0 ){
            std::cout<<i<<"\n";
        }
        else{}
    }
    std::cout<<"Числа які є квадратами натуральних чисел \n";
        for(int i = x; i<y; i++){
        double n = sqrt(i);
         if(n == floor(n) ){
             std::cout<<i<<"\n";
         }
         else{}
    }
}
void fun7(int x, int y, int z){

std::cout<<"Введіть значення n\n";
std::cin>>z;
int sum = 0;
for(x = 1, y = 1;x <= z, y <= z; x++, y++){
    sum+=(1+x+y);
}
std::cout<<"Ваша сума = "<<sum<<"\n";


}
int main() {
    setlocale(LC_ALL, "uk_UA.utf8");
    int vari;
    do {
        std::cout << "Введіть номер завдання(1-7), 0 для завершення\n";
        std::cin >> vari;
        switch (vari) {
        case 1:
            fun1(x);
            break;
        case 2:
            fun2(x);
            break;
        case 3:
            fun3(x, y, z);
            break;
        case 4:
            fun4(x, y);
            break;
        case 5:
            fun5(x);
            break;
        case 6:
            fun6(x, y, z);
            break;
        case 7:
            fun7(x, y, z);
        break;
        case 0:
            return 1;
        break;
         default:
            std::cout << "Виберіть зі списку вище\n";
            break;
        }
    } while (vari !=0 );



    return 0;
}

