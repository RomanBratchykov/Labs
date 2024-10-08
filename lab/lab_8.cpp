#include <iostream>
#include <cmath>

int x, y, x1, yone, x2, y2;

double Perymetr(int x, int y) {
    return 2 * x + 2 * y;
}
double Ploscha(int x, int y) {
    return x * y;
}
int Sign(int x) {
    if (x < 0) return -1;
    else if (x == 0) return 0;
    else return 1;
}
int SumRange(int x, int y) {
    int sum = 0;
    if (x > y) return 0;
    else {
        for (int i = x; i <= y; i++) {
            sum += i;
        }
        return sum;
    }
}
int Quarter(int x, int y) {
    if (x > 0 && y > 0) return 1;
    else if (x < 0 && y > 0) return 2;
    else if (x < 0 && y < 0) return 3;
    else if (x > 0 && y < 0) return 4;
    
    else return 0;  
}
bool Even(int x) {
    return x % 2 == 0;
}
double leng(int x, int y, int x1, int yone) {
    return sqrt(pow((x1 - x), 2) + pow((yone - y), 2));
}

int main() {
    int vari;
    do {
        std::cout << "Enter number of task(1-6), 0 to quit\n";
        std::cin >> vari;
        switch (vari) {
        case 1:
            std::cout << "Enter two coordinates of C: \n";
            std::cin >> x >> y;
            std::cout << "Your perymetr is = " << Perymetr(x, y) << " and your area = " << Ploscha(x, y) << "\n";
            break;
        case 2:
            std::cout << "Enter your number to find the sign\n";
            std::cin >> x;
            std::cout << "Sign of your number is = " << Sign(x) << "\n";
            break;
        case 3:
            std::cout << "Enter two numbers (first is start, second is end) to find the sum\n";
            std::cin >> x >> y;
            if (x == y)std::cout<<"There is no sum between two similar numbers\n";
            else{
            if (SumRange(x, y) == 0) std::cout << "First number can't be higher than second\n";
            else std::cout << "Your sum is = " << SumRange(x, y) << "\n";
            }
            break;
        case 4:
            std::cout << "Enter your dots to find out where they are. To quit, type -1 -1.\n";
            while (true) {
                std::cin >> x >> y;
                if (x == -1 && y == -1) break;
                if (Quarter(x, y) == 0) std::cout << "The point lies on an axis\n";
                else std::cout << "Your dot is in quarter " << Quarter(x, y) << "\n";
            }
            break;
        case 5:{
            int count = 0;
            std::cout << "Enter 10 numbers\n";
            for (int i = 0; i < 10; i++) {
                std::cin >> x;
                if (Even(x)) count++;
            }
            std::cout << "In these 10 numbers, " << count << " are even\n";
            break;}
        case 6:
            std::cout << "Write the coordinates of A, B and C\n";
            std::cin >> x >> y >> x1 >> yone >> x2 >> y2;
            std::cout << "Length of AB is = " << leng(x, y, x1, yone) << "\n";
            std::cout << "Length of BC is = " << leng(x1, yone, x2, y2) << "\n";  // Fix for BC
            std::cout << "Length of AC is = " << leng(x, y, x2, y2) << "\n";
            break;
        case 0:
            return 0;  
        default:
            std::cout << "Choose one of the above\n";
            break;
        }
    } while (vari != 0);
    return 0;
}
