#include <iostream>
#include <cmath>
#include <iostream>
#include <time.h>
#include <vector>



int main() {
    srand(time(0));
    int vari;
    do{
        std::cout << "Enter number of task (1-5), 0 to quit\n";
        std::cin >> vari;
        switch (vari) {
        case 1: {
            int n, n1;
            std::cout<<"Enter size of 1 array\n";
            std::cin>>n;
            char a[n];
            for(int i = 0; i<n; i++) std::cin>>a[i];    
            std::cout<<"Enter size of 2 array\n";
            std::cin>>n1; 
            char b[n1]; 
            for(int i = 0; i<n1; i++) std::cin>>b[i]; 
            if(n>n1){
                for(int i = 0; i<n; i++) 
                    if(a[i] == 'a') a[i] = '*';
                for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
                std::cout<<"\n";
        }
        if(n<n1){
            for(int i = 0; i<n1; i++) 
                if(b[i] == 'a') b[i] = '*';
                for(int i = 0; i<n1; i++) std::cout<<b[i]<<" ";
                std::cout<<"\n";
        }
        }
        case 2: 
        {
            int n;
            std::cout<<"Enter size of 1 array\n";
            std::cin>>n;
            char a[n], b[n];
            int count = 0, count2 = 0, num = -1, n1 = n;
            for(int i = 0; i<n; i++) std::cin>>a[i];
            std::cout<<"your array is\n";
            for(int i = 0; i<n; i++) b[i] = a[i];
            for(int i = 0; i<n; i++){ 
            if(count == 0 && a[i] == 'a') {
                     num = i;
                    count++;
                    }
            if(a[i] == '_' || a[i] == 'o') count2++;
            std::cout<<a[i]<<" ";
            }
            std::cout<<"\n";
            if  (num == -1) std::cout<<"There is no a in array\n";
            else std::cout<<"ID of first a is "<<num<<"\n";
              
            std::cout<<"sum of _ and o is "<<count2<<"\n"; 
            for(int i = 0; i<n; i++) 
                if(a[i] == 'a') {
                   for(int j = i; j<n; j++) {
                        int temp = a[j];    
                        a[j] = a[j+1];  
                        a[j+1] = temp;
                        }  
                        n--;
                }
                   
                    for(int i = 0; i<n; i++) a[i] = '*';
                    for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
                    std::cout<<"\n";
                    int st = -1, en = -1;
                    for(int i = 0; i<n; i++) {
                        if(b[i] == 'o') en = i;
                        if(b[i] == '_') st = i;
                    }
                    if(st != -1 && en != -1) {
                    for(int i = st+1; i<en; i++) std::cout<<b[i]<<" ";
                    std::cout<<"\n";
                    }
                    double count3 = 0.0;
                    for(int i = 0; i<n; i++)
                        if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u') count3++;
                    std::cout<<"Persentage of vowels is "<<(count3/n1)*100<<"%\n";
                            }
        break;
        case 3:
        {


            int n;
            std::cout<<"Enter size of 1 array\n";
            std::cin>>n;
            char a[n];
            for(int i = 0; i<n; i++) std::cin>>a[i];
            std::cout<<"your array is\n";   
            for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
            std::cout<<"\n";
            int count = 0;
            for(int i = 0; i<n; i++)
                if(a[i] == 'a'&& a[i+1] == 'b') count++;
            for(int i = 0; i<n; i++){
                if(count >3 && a[i] =='a'||a[i] =='e'||a[i] =='i'||a[i] =='o'||a[i] =='u') 
                   a[i] = ' ';
                  if(count <=3 && a[i] =='a'||a[i] =='e'||a[i] =='i'||a[i] =='o'||a[i] =='u') a[i]= '.';
            }
            std::cout<<"your modified array is\n";
            for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
        }
        break;
        case 4:  
        {
        char a[12];
        std::cout<<"Enter word with 12 letters\n"; 
        for(int i = 0; i<12; i++) std::cin>>a[i]; 
        std::cout<<"your word is\n";
        for(int i = 0; i<12; i++) std::cout<<a[i];
        std::cout<<"\n";
        for(int i = 0; i<12; i++) if(a[i] == 'e'){
            for(int j = 0; j<12; j++) std::cout<<a[j];
            std::cout<<"\n";
            for(int k = 0; k<12; k++) std::cout<<a[k];  
        }
        std::cout<<"\n";
        for(int i = 4; i<8; i++) std::cout<<a[i];
         for(int i = 0; i<4; i++) std::cout<<a[i];
         for(int i = 8; i<12; i++) std::cout<<a[i];
         std::cout<<"\n";
        }
        break;
        case 5:{
        char a[1000];
        std::vector<int> v;
        int count = 0, countp = 0, pun = 0;
        std::cout<<"start enter words, spaces between words write as _ for end write 0\n";
        for(int i = 0; i<1000; i++) {
            std::cin>>a[i];
            if(a[i] == '0'){
                pun = i;
                break;
            }
        } 
        for(int i = 0; i<pun+1 ;i++) if(a[i] =='_' || a[i] == '0') {
            v.push_back(i);
            count++;
        }
        int max = v[0];
        for(int i = 0; i<count -1; i++) {
            std::cout<<v[i]<<" ";
            int gap = v[i+1] - v[i] - 1;
            if(gap > max) max = gap;
        }
        for(int i = 0; i < pun;i++)
            if( (a[i] =='_' && a[i+1] =='p') || a[0] == 'p') countp++;
        std::cout<<"number of words is "<<count<<" and number of words that starts with p is "<<countp<<"\n";
        std::cout<<"max length of word is "<<max<<"\n";
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

    
