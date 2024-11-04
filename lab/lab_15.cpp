#include <iostream>
#include <vector>




int main() {
    int vari;
    do{
        std::cout << "Enter number of task (1-6), 0 to quit\n";
        std::cin >> vari;
        switch (vari) {
        case 1: {
            int n = 20, count = 0;
            char a[n] = "nc bdnj  end  nb  d"; 
               std::cout<<"your array is\n";
            for(int i = 0; i<n; i++) std::cout<<a[i];
            std::cout<<"\n";
            for(int i = 0; i<20; i++)
                if(a[i] == ' ' && a[i+1]== ' ') {
                    for(int j = i; j<19; j++) {
                        int temp = a[j];    
                        a[j] = a[j+1];  
                        a[j+1] = temp;
                         n--;               
                }   
                }
                char final[25] = "12345";
                for(int i = 0; i<25; i++){
                    final[i+5] = a[i];
                }
                for(int i = 0; i<25; i++) std::cout<<final[i];
                std::cout<<"\n";  
        }
        case 2: 
                {
                    int n,n1;
                    std::cout<<"enter size of 1 array and start enter it\n";
                    std::cin>>n;
                    char a[n];
                    for(int i = 0; i<n; i++) std::cin>>a[i];
                     std::cout<<"enter size of 2 array and start enter it\n";
                    std::cin>>n1;
                    char b[n1];
                    for(int i = 0; i<n1; i++) std::cin>>b[i];
                   int sum = n+n1;
                   a[sum];
                   for(int i = 0; i<sum; i++){
                    a[i+n] = b[i];
                   }
                   for(int i = 0; i<sum; i++) if(a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9' || a[i] == '0') a[i] = '*';
                   for(int i = 0; i<sum; i++) std::cout<<a[i]<<" ";
                    




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
            char ch[n];
            for(int i = 0; i<n; i++){
                ch[i] = a[i];
            }
            
            std::cout<<"your Ch array is\n";
            for(int i = 0; i<n; i++) std::cout<<ch[i]<<" ";
        }
        break;
        case 4:  
        {
                    int n,n1;
                    std::cout<<"enter size of 1 array and start enter it\n";
                    std::cin>>n;
                    char a[n];
                    for(int i = 0; i<n; i++) std::cin>>a[i];
                     std::cout<<"enter size of 2 array and start enter it\n";
                    std::cin>>n1;
                    char b[n1];
                    for(int i = 0; i<n1; i++) std::cin>>b[i];
                    for(int i = 0; i<n; i++) 
                        for(int j = 0; j<n1; j++) {
                            if(a[i] == b[j]) {
                                int temp = a[i];
                                a[i] = a[i+1];
                                a[i+1] = temp;
                            }
                            n--;
                        }
                            std::cout<<"your array is\n";
                            for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
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
        for(int i = 0; i<pun+1 ;i++) if(a[i] =='_' || a[i] == '0') 
            v.push_back(i);
            std::cout<<"words with 3 a\n";
            for(int i = 0; i<v.size(); i++) std::cout<<v[i]<< " ";
            for(int i = 0; i<v.size(); i++)  {
                countp = 0;
                int start = (i == 0) ? 0 : v[i] + 1;
                int end = (i == 0)? v[0]:v[i+1];
                for(int j = start; j<end; j++) {
                    if(a[j] == 'a' || a[j] == 'A' ) countp++;
                } 
                if (countp == 3) {
                for(int j = start; j<end; j++) std::cout<<a[j];
                std::cout<<"\n";
                }
               
            }
           
           
        }
        break;
        case 6:{
            char a[1000];
            int pun;
            std::cout<<"start enter, 0 to end\n";
            for(int i = 0; i<1000; i++) {
                std::cin>>a[i];
                if(a[i] == '0'){ 
                    pun = i;
                    break;
                }
            }
            for(int i = 0; i<pun-1; i++){
                if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') a[i] = toupper(a[i]);
                else if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') a[i] = tolower(a[i]);
                else {
                    for(int j = i; j < pun ; j++) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    
                }
                pun--;
            }
            std::cout<<a[i];
           

        }
         std::cout<<"\n";
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

    
