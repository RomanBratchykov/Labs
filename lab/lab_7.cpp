#include <iostream>
#include <cmath>
#include <string>
#include <locale>
#include <vector>

int x, y, z;
void fun1() {
    std::cout << "Введіть курс $: \n";
    std::cin >> x;
     y = 1;
    while(y<=10){
        
        std::cout<<y<<" $ = "<<y*x<<" гривень\n";
        y++;
    }  
}   
void fun2() {
    std::cout << "Введіть значення n: \n";
    std::cin >> x;
    int i = 1;
    double sum = 0;
    while (i <= x){
    sum+=1.0/i;
    std::cout<<sum<< " ";
    i++;
   }
   std::cout<<"Сума = "<<sum<<"\n";

}
void fun3(){
    std::cout<<"Введіть кількість чисел які хочете додати:\n";
    std::cin>>x;
    y = 0;
    do{
        if(y == 0){
          std::cout<<"Почніть вводити числа, у вас залишилось "<<x<<" чисел\n";
          std::cin>>y;
          z+=y; 
          std::cout<<"Ваша сума на даний момент = "<<z<<"\n";
          y++; 
        } 
        else{
            std::cout<<"Продовжуйте вводити. У вас залишилось "<<x-1<< " чисел\n";
            std::cin>>y;
            z+=y; 
            std::cout<<"Ваша сума на даний момент = "<<z<<"\n";
            y++;
            x-=1;
        }
    } 
    while (y <= x);
    std::cout<<"Ваша кінцева сума = "<<z<<"\n";
}     
void fun4() {
    std::cout<<"Введіть числа, щоб закінчити виберіть 0:\n";
    std::vector<int> v;
    while(1){
       std::cin>>x;
       if (x == 0) break;
       v.push_back(x);
    }
    int min_el = v[0];
    int max_el = v[0];
    for(int i = 0; i < v.size(); i++){
        if(v[i]>max_el) max_el = v[i];
    }
        
    for(int i = 0; i < v.size(); i++){
        if(v[i]<min_el)  min_el = v[i];    
    }
    std::cout<<"Кількість введених чисел = "<<v.size()<<"\n";
    std::cout<<"Мінімальне число = "<<min_el<<"\n";
    std::cout<<"Максимальне число = "<<max_el<<"\n";
}
void fun5(){
    std::cout<<"Введіть n яке буде числом кінця.\n";
    std::cin>>x;
    std::cout<<"Вводьте різні числа.\n";
    int sum;
    int count = 0;
    while(true){
        std::cin>>z;
        if (z==x)break;

        if(z>0) {   
        sum+=z;
        count++;
        }
    }
    std::cout<<"Ваше середнє значення  = "<<sum/count<<"\n";
        
    }
void fun6(){
    double sum;
    double count = 0.0f;
    double count_5 = 0.0f;
    std::cout<<"Введіть кількість студентів \n";
    std::cin>>x;
    std::cout<<"Вводіть оцінки для визначення середнього балу та кількості п'ятірок, щоб закінчити виберіть 0\n";
  while(true){
    std::cin>>y;
    if(y>=0 && y<=5){
    if(y == 0)break;
    else{
        if(y == 5){
            count_5++;
            count++;
            sum+=y;
        }
        else { 
        sum+=y;
        count++;
        }
        }
    }
     else std::cout<<"Введіть оцінку від 1 до 5\n";
  }
  std::cout<<"Середня оцінка = "<<sum/count<<"\n";
  std::cout<<"Кількість п'ятірок = "<<count_5<<"\n";
}



int main() {
    setlocale(LC_ALL, "uk_UA.utf8");
    int vari;
    do {
        std::cout << "Введіть номер завдання(1-6), 0 для завершення\n";
        std::cin >> vari;
        switch (vari) {
        case 1:
            fun1();
            break;
        case 2:
            fun2();
            break;
        case 3:
            fun3();
            break;
        case 4:
            fun4();
            break;
        case 5:
            fun5();
            break;
        case 6:
            fun6();
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
