#include <iostream>
#include <cmath>
#include <string>
#include <locale>

int x, y, z, v, b , n;
double x1, yx;
void fun1(int x, int y, int z, int v, int b, int n) {
    std::cout << "Введіть Координати точок A, B i C\n";
    std::cin >> x>> y>> z>> v>>b>>n;
    int  AB = sqrt(pow((z-x), 2)+ pow((v-y), 2));
    int AC = sqrt(pow((b-x), 2)+ pow((n-y), 2));
    if (AB > AC) {
        std::cout << "Точка С з координатами"<< "("<<b<<";"<<n<<")"<<" розміщена ближче до точки А\n";
    }
    else if (AB < AC){
        std::cout << "Точка B з координатами"<< "("<<z<<";"<<v<<")"<<" розміщена ближче до точки А\n";
    }
    else{
        std::cout<<"Точки знаходяться на однакових координатах\n";
    }
    
}   
void fun2(int x) {
    std::cout << "Введіть суму покупки в гривнях\n";
    std::cin >> x;
    if (x < 500) {
        std::cout << "Знижки нема, сума до оплати " <<x<<" грн"<< "\n";
    }
    else if (x >= 500 && x <= 1000) {
        std::cout<<"Сума до оплати становить "<<x-(x*0.05)<<" грн"<<"\n";
    }
    else if (x > 1000 && x <= 10000) {
        std::cout<<"Сума до оплати становить "<<x-(x*0.07)<<" грн"<<"\n";
    }
    else if (x > 10000) {
        std::cout<<"Сума до оплати становить "<<x-(x*0.09)<<" грн"<<"\n"; 
    } 
    else {
        std::cout << "Введіть суму\n";
    }
}
void fun3(int x, int y, int z, int v, int b, int n){
        std::cout<<"Введіть довжину ребер коробки, а потім введіть довжину ребер ящика\n";
        std::cin>>x>>y>>z>>v>>b>>n;
        if(v>x &&b>y && n>z){
            std::cout<<"Коробка влізає в ящик\n";
        }
        else{
            std::cout<<"Коробка не влізає в ящик\n";
        }
}
void fun4(int x, int y, int z, int v, int b, int n) {
    n=0;
    std::cout << "Тест\n"<<"Питання перше:\n"<<"2+2\n";
    std::cin >> x;
    if(x == 4){
        n++;
    }
    else{
        n=n;
    }
     std::cout <<"Питання друге:\n"<<"Яку кількість півлітрових банок треба щоб розлити 5 літрів соку?"<<"\n";
    std::cin >>y ;
    if(y == 10 ){
        n++;
    }
    else{
        n=n;
    } 
    std::cout <<"Питання третє:\n"<<"Скільки гривень коштує мівіна в аврорі?"<<"\n";
    std::cin >> z;
    if(z == 7){
        n++;
    }
    else{
        n=n;
    } 
    std::cout <<"Питання четверте:\n"<<"Відповіть на питання життя, смерті і всього такого?"<<"\n";
    std::cin >> v;
    if(v == 42){
        n++;
    }
    else{
        n=n;
    } 
    std::cout <<"Питання п'яте:\n"<<"В якому році мав бути кінець світу за календрем майа?"<<"\n";
    std::cin >> b;
    if(b == 2012){
        n++;
    }
    else{
        n=n;
    } 

    std::cout<<"Ваша оцінка за тест: "<<n<<"\n";
}
void fun5(int x){
    std::cout<<"Введіть номер дня тижня\n";
    std::cin>>x;
    switch(x){
        case 1:
        std::cout<<"В понеділок у вас такі заняття:\n"<<"1. Програмування \n"<<"2. Фізкультура\n";
        break;
        case 2:
        std::cout<<"У вівторок у вас такі заняття:\n" << "1. Українська мова \n"<< "2. Англійська мова\n";
        break;
        case 3:
        std::cout<<"У середу у вас такі заняття:\n"<<"1. Програмування\n"<<"2. Англійська мова\n";
        break;
        case 4:
        std::cout<<"У четвер у вас такі заняття:\n"<<"1. Програмування\n"<<"2. Математика\n";
        break;
        case 5:
        std::cout<<"В п'ятницю у вас такі заняття:\n"<<"1. Математика\n"<<"2. Англійська мова\n";
        break;
        case 6:
        std::cout<<"В суботу у вас вихідний\n";
        break;
        case 7:
        std::cout<<"В неділю у вас вихідний\n";
        break;
        default:
        std::cout<<"Введіть номер від 1 до 7\n";
        
    }
}
void fun6(double x1, double yx, int n){
    std::cout<<"Введіть два числа з якими хочете виконати операції\n";
    std::cin>>x1>>yx;
    std::cout<<"Виберіть операцію(1 - додавання, 2 - віднімання, 3 - множення, 4 - ділення\n";
    std::cin>>n;
    switch(n){
        case 1:
        std::cout<<"Ваш результат "<<x1+yx<<"\n";
        break;
         case 2:
         std::cout<<"Ваш результат "<<x1-yx<<"\n";
        break;
         case 3:
         std::cout<<"Ваш результат "<<x1*yx<<"\n";
        break;
         case 4:
         std::cout<<"Ваш результат "<< x1/yx <<"\n";
        break;
        default:
        std::cout<<"Виберіть щось з списку вище\n";
        break;
    }
}
    
int main() {
    setlocale(LC_ALL, "uk_UA.utf8");
    int vari;
    do {
        std::cout << "Введіть номер завдання(1-6), 0 для завершення\n";
        std::cin >> vari;
        switch (vari) {
        case 1:
            fun1(x, y,z, v, b, n);
            break;
        case 2:
            fun2(x);
            break;
        case 3:
            fun3(x, y, z, v, b, n);
            break;
        case 4:
            fun4(x, y, z, v, b, n);
            break;
        case 5:
            fun5(x);
            break;
        case 6:
            fun6(x1, yx, n);
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

