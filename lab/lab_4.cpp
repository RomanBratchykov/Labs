#include <iostream>
#include <cmath>
#include <string>
#include <locale>

double x;
int x1, y, z;
int var, num;
void fun1(double x) {
    std::cout << "Введіть число х\n";
    std::cin >> x;
    if (x < -2) {
        std::cout << sin(x) + (-1) * x << "\n";
    }
    else if (x >= -2) {
        std::cout << sqrt(pow(x, 3)) << "\n";
    }
    else {
        std::cout << "Введіть число\n";
    }
}
void fun2(int x1) {
    std::cout << "Введіть число х\n";
    std::cin >> x;
    if (x < -10) {
        std::cout << 3 * (pow(x, 2)) - pow(x, 3) << "\n";
    }
    else if (x >= -10 && x <= 10) {
        if( (x - 2 * (pow(x, 2))) < 0 ) {
            std::cout<<"Кореня з мінусових чисел не існує\n";
        }
        else{
            std::cout << sqrt(x - 2 * (pow(x, 2))) << "\n";
        }
       
    }
    else if (x > 10) {
        std::cout << cos(x - 3) << "\n";
    }
    else {
        std::cout << "Введіть число\n";
    }
}
void tri(double x, double y, double z) {
    std::cout << "Введіть три відрізки\n";
    std::cin >> x >> y >> z;
    if ((x + y) > z) {
        std::cout << "Трикутник існує\n";
    }
    else {
        std::cout << "Трикутник не існує\n";
    }

}
void kvad(int x1, int y, int z) {
    std::cout << "Введіть три значення для а, b та c:\n";
    std::cin >> x >> y >> z;
    std::cout << "Вигляд вашого рівняння:" << x << "x^2 + " << y << "x + " << z << " = 0\n";
    int D = pow(y, 2) - 4 * x * z;
    if (D > 0) {
        std::cout << "У рівняння два корені: x1 = " << (y * (-1) + sqrt(D)) / 2*x << " і x2 = " << (y * (-1) - sqrt(D)) / 2*x << "\n";
    }
    else if (D == 0) {
        std::cout << "У рівняння один корінь: x = " << y * (-1) / 2 << "\n";
    }
    else {
        std::cout << "Рівняння коренів не має\n";
    }

}
void pos(double x, double y, double z) {
    std::cout << "Введіть три значення\n";
    std::cin >> x >> y >> z;
    if (x<y && x>z) {
        std::cout << x << " це число посередині\n";
    }
    else if (y<x && y>z) {
        std::cout << y << " число посередині\n";
    }
    else if (z<x && z>y) {
        std::cout << z << " число посередині\n";
    }
    if (x>y && x<z) {
        std::cout << x << " це число посередині\n";
    }
    else if (y>x && y<z) {
        std::cout << y << " число посередині\n";
    }
    else if (z>x && z<y) {
        std::cout << z << " число посередині\n";
    }
};
void grade(int var) {
    std::cout << "Введіть бал який ви отримали:\n";
    std::cin >> var;
    if (var <= 100 && var >= 90) {
        std::cout << "У вас А\n";
    }
    else if (var < 90 && var >= 80) {
        std::cout << "У вас B\n";
    }
    else if (var < 80 && var >= 70) {
        std::cout << "У вас C\n";
    }
    else if (var < 70 && var >= 60) {
        std::cout << "У вас D\n";
    }
    else if (var < 60 && var >= 50) {
        std::cout << "У вас E\n";
    }
    else if (var < 50 && var >= 35) {
        std::cout << "У вас нездача з можливістю перездачі(Fx)\n";
    }
    else if (var < 35 && var >= 0) {
        std::cout << "У вас нездача без можливості перездачі(F)\n";
    }
    else {
        std::cout << "Введено неправильне значення\n";
    }
}
int luck(int num){
    std::cout<<"Введіть номер квитка:\n";
    std::cin>>num;
    if(num < 100000 || num > 999999){
        std::cout<<"Номер має бути шестизначним\n";
        return 1;
    }
    int sum1 = 0;
    int sum2 = 0;
    sum1 += (num/100000)%10;
    sum1 +=(num/10000)%10;
    sum1 +=(num/1000)%10;

    sum2 +=(num/100)%10;
    sum2 +=(num/10)%10;
    sum2 += num%10;

    if(sum1 == sum2){
        std::cout<<"Щасливий квиток!\n";
    }
    else{
        std::cout<<"Звичайний квиток\n";
    }
    return 0;
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
            fun2(x1);
            break;
        case 3:
            tri(x, y, z);
            break;
        case 4:
            kvad(x, y, z);
            break;
        case 5:
            pos(x, y, z);
            break;
        case 6:
            grade(var);
            break;
        case 7:
            luck(num);
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