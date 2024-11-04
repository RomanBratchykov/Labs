#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

struct Students{
    std::string name;
    std::string surname;
    int age;
    int grades;
};
char conv(double average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    if (average >= 50) return 'E';
    return 'F';
}


int main() {
    int vari;
    do{
        std::cout << "Enter number of task (1-6), 0 to quit\n";
        std::cin >> vari;
        std::cin.ignore();
        switch (vari) {
        case 1: {
            std::ofstream writeinfile("D:/zavd1.txt");

            if(!writeinfile.is_open()) {
                std::cerr<<"Error opening file D:/zavd6.txt for task 6\n";
                break;;
            }
            
          
            std::string line;
            for(int i = 0; i<4; i++){
                std::cout<<"Enter line\n";
                std::getline(std::cin, line);
                writeinfile<<line<<"\n";
            }
                writeinfile.close();

            std::ifstream readinfile("D:/zavd1.txt");

            if (!readinfile.is_open()) {
                std::cerr<<"Error\n";
                break;;
            }

          
            std::vector<Students> students;
            while (std::getline(readinfile, line)) {
                std::istringstream iss(line);
                Students student;
                iss >> student.name >> student.surname >> student.age;
                students.push_back(student);
                }
         
            readinfile.close();
            for (const auto& student : students) {
                std::cout << student.age << " " << student.surname << " " << student.name << "\n";
            }   
                
        break;
        }
        
        case 2:{ 
                std::ofstream writeinfile("D:/zavd2.txt");
                if (!writeinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;;
                }
                std::string line;
                std::cout<<"Enter 3 digits number\n";
                std::getline(std::cin, line);
                writeinfile<<line<<"\n";
                if(line.size() != 3) {
                    std::cerr<<"Error\n";
                    break;
                }
                writeinfile.close();

                std::ifstream readinfile("D:/zavd2.txt");
                if (!readinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;
                }
                std::getline(readinfile, line);
                readinfile.close();

                std::swap(line[0], line[2]);

                std::ofstream writeinfile1("D:/zavd2.txt");
                if (!writeinfile1.is_open()) {
                    std::cerr<<"Error\n";
                    break;;
                }
                writeinfile1<<line<<"\n";
        }
        break;
        case 3:
        {   
            std::ofstream writeinfile("D:/zavd3.txt");
            if (!writeinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            std::cout<<"enter numbers\n";
            
            std::string line;
            do{
            std::getline(std::cin, line);
            writeinfile<<line<<"\n";
            }while(line != "0");
            writeinfile.close();
            std::ifstream readinfile("D:/zavd3.txt");
            if (!readinfile.is_open()){
                std::cerr<<"error1\n";
                break;
            }
            int count = 0;
            while(std::getline(readinfile, line)){
            std::istringstream iss(line);
                for(char ch : line){
                    if(ch != ' '){
                    int num = ch - '0';
                    std::cout<<num<<" ";
                    if(num % 2 == 0 &&num !=0) count++;  
                    }  
                }
            }
            readinfile.close();
            std::cout<<"number of even numbers is "<<count<<"\n";
        }
        break;
        case 4:  
        {
            std::ofstream writeinfile("D:/zavd4.txt");
            if (!writeinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            std::string line;
            std::cout<<"Enter student and his grade\n";
            for(int i = 0; i<5; i++){
                std::getline(std::cin, line);
                writeinfile<<line<<"\n";
            }
            writeinfile.close();

            std::ifstream readinfile("D:/zavd4.txt");
            if (!readinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            std::vector<Students> students;
            while (std::getline(readinfile, line)) {
                std::istringstream iss(line);
                Students student;
                iss >> student.surname >>  student.grades;
                students.push_back(student);
            }
            readinfile.close();
            double total = 0.0f;
            for (const auto& student : students) {
                total += student.grades;
            }
            double avg = total / students.size();
            char score  = conv(avg);

            std::ofstream appendfile("D:/zavd4.txt", std::ios::app);
            if (!appendfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            appendfile<<"Average grade is "<<avg<<" and score in ECTS "<<score<<"\n";
            writeinfile.close();
                
           
        }
        break;
        case 5:{
             std::ofstream writeinfile("D:/zavd5.txt");
            if (!writeinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            std::string line;
            std::cout<<"Enter how many symbols you want to enter(more that 40)\n";
                std::getline(std::cin, line);
                writeinfile<<line<<"\n";
                writeinfile.close();

            std::ifstream readinfile("D:/zavd5.txt");
            if (!readinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            int count = 0;
            
            while(std::getline(readinfile, line)){
                std::istringstream iss (line);
                if(line.size() < 40) {
                    std::cerr<<"you need to enter more then 40 symbols\n";
                    break;
                }
                for(char ch : line){
                    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') count++;
                }
            }
            readinfile.close();
            std::ofstream appendfile("D:/zavd5.txt", std::ios::app);
            appendfile<<"number of vowels is "<<count<<"\n";
        }
        break;
        case 6:{
            std::ofstream writeinfile("D:/zavd6.txt");
                if (!writeinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;
            }
            std::string line, line2;
            std::cout<<"enter sentences\n";
                std::getline(std::cin, line);
                writeinfile<<line<<"\n";
                writeinfile.close();

            std::ifstream readinfile("D:/zavd6.txt");
            if (!readinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            std::ofstream new6task("D:/zavd6fixed.txt");
                if (!new6task.is_open()) {
                    std::cerr<<"Error\n";
                    break;
                }
            while(std::getline(readinfile, line2)){
                std::istringstream iss(line2);
                for(int i = 0; i<line2.size(); i++){
                    if(line2[i] == ' ' && line2[i+1] == ' '){
                        line2.erase(i+1, 1);
                        --i;
                        
                    }
                }
                 new6task<<line2<<"\n";
            } 
                readinfile.close();
                new6task.close();
                std::cout << "Spaces have been fixed. Output saved in D:/zavd6fixed.txt\n";

            }
        
        break;
        case 0:
            return 0; 
            break; 
        default:
            std::cout << "Choose one of the above\n";
            break;
        }
    }
     while(vari !=0);
    return 0;
}

    
