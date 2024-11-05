#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

struct Students{
    std::string name;
    std::string surname;
    int age;
    int grade_hist;
    int grade_math;
    int grade_english;
};



int main() {
    int vari;
    do{
        std::cout << "Enter number of task (1-5), 0 to quit\n";
        std::cin >> vari;
        std::cin.ignore();
        switch (vari) {
        case 1: {
            std::ofstream writeinfile("D:/lab_18_1.txt");

            if(!writeinfile.is_open()) {
                std::cerr<<"Error opening file D:/zavd6.txt for task 6\n";
                break;
            }
            
          
            std::string line;
            std::cout<<"Enter surname, and grades from history, math and english(100 grades system)\n";
            for(int i = 0; i<4; i++){
                
                std::getline(std::cin, line);
                writeinfile<<line<<"\n";
            }
                writeinfile.close();

            std::ifstream readinfile("D:/lab_18_1.txt");

            if (!readinfile.is_open()) {
                std::cerr<<"Error\n";
                break;;
            }


            std::vector<Students> students;
            while (std::getline(readinfile, line)) {
                std::istringstream iss(line);
                Students student;
                iss >> student.surname >> student.grade_hist >> student.grade_math >> student.grade_english;
                if(student.grade_hist < 0 || student.grade_hist > 100 || student.grade_math < 0 || student.grade_math > 100 || student.grade_english < 0 || student.grade_english > 100){
                    std::cerr<<"Enter grades from 1 to 100\n";
                    break;
                }
                students.push_back(student);
                }
         
            readinfile.close();
            for (const auto& student : students) {
                if(student.grade_hist >=90 || student.grade_math >= 90 || student.grade_english >= 90){
                    std::cout << student.surname << "\n";
                }
            }   
                
        break;
        }
        
        case 2:{ 
                std::ofstream writeinfile("D:/lab_18_2.txt");
                if (!writeinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;;
                }
                std::string line;
                std::cout<<"Enter english words\n";
                while(true){
                std::getline(std::cin, line);
                if(line == "0") break;
                writeinfile<<line<<"\n";
                }
                
                writeinfile.close();

                std::ifstream readinfile("D:/lab_18_2.txt");
                if (!readinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;
                }
                std::cout<<"Enter number of characters in word\n";
                int num;
                std::cin>>num;
                
                while(std::getline(readinfile, line)){
                    std::istringstream iss(line);
                    std::string word;
                    while (iss >> word) {
                        if(word.size() == num) std::cout<<word<<" ";
                    }
                }
                std::cout<<"\n";
        }
             
        break;
        case 3:
        {   
            std::ofstream writeinfile("D:/lab_18_3.txt");
                if (!writeinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;;
                }
                std::string line;
                std::cout<<"Enter english words\n";
                while(true){
                std::getline(std::cin, line);
                if(line == "0") break;
                writeinfile<<line<<"\n";
                }
                
                writeinfile.close();

                std::ifstream readinfile("D:/lab_18_3.txt");
                if (!readinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;
                }
                
                
                while(std::getline(readinfile, line)){
                    std::istringstream iss(line);
                    std::string word, word2;
                    while (iss >> word) {
                        if(word.size() == 1) {
                            std::cout<<word<<" ";
                            line.erase(line.find(word), 1);
                        }
                       
                    }
                    std::istringstream iss2(line);
                    while (iss2 >> word2) {
                        std::cout<<word2<<" ";
                    }
                    
                }
                std::cout<<"\n";
                readinfile.close();
        }
        break;
        case 4:  
        {
           std::ofstream writeinfile("D:/lab_18_4.txt");
                if (!writeinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;;
                }
                std::string line;
                std::cout<<"Enter english words\n";
                while(true){
                std::getline(std::cin, line);
                if(line == "0") break;
                writeinfile<<line<<"\n";
                }
                
                writeinfile.close();

                std::ifstream readinfile("D:/lab_18_4.txt");
                if (!readinfile.is_open()) {
                    std::cerr<<"Error\n";
                    break;
                }
                
                
                while(std::getline(readinfile, line)){
                    std::istringstream iss(line);
                    std::string word;
                    std::string appendline;
                    int count = 0;
                    while (iss >> word) {
                       appendline += word + "(" + std::to_string(word.size()) + ") \n";
                        count++;
                    }
                    readinfile.close();
                    std::cout<<"number of words is "<<count<<"\n";
                    std::ofstream appendfile("D:/lab_18_4.txt");
                    if (!appendfile.is_open()) {
                        std::cerr<<"Error\n";
                        break;
                    }   
                   
                    appendfile<<appendline<<"\n";
                    appendfile.close();
                    
                }
                std::cout<<"\n";
        }
        break;
        case 5:{

             std::ofstream writeinfile("D:/lab_18_5.txt");
            if (!writeinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            std::string line;
            std::cout<<"Enter sentence with punctuation marks\n";
               while(true){
                std::getline(std::cin, line);
                if(line == "0") break;
                writeinfile<<line<<"\n";
                }
                writeinfile.close();
            std::ifstream readinfile("D:/lab_18_5.txt");
            if (!readinfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            int count = 0;
            std::vector <char> v;
            while(std::getline(readinfile, line)){ 
               for(char ch : line){
                if(ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ':' || ch == ';') v.push_back(ch);
               }
            }
            readinfile.close();
            std::ofstream charfile("d:/Lab_18_5punc.txt");
            if (!charfile.is_open()) {
                std::cerr<<"Error\n";
                break;
            }
            for(char ch : v) charfile << ch << " ";
            charfile.close();
        
        break;
        }
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

    
