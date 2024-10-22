#include <iostream>
#include <cmath>
#include <iostream>
#include <ctime>
#include <vector>

int n, m;


int main() {
    srand(time(0));
    int vari;
    do{
        std::cout << "Enter number of task (1-7), 0 to quit\n";
        std::cin >> vari;
        switch (vari) {
        case 1: {
        std::cout<<"Enter number of rows and columns\n";
        std::cin>>n>>m;
        int a[n][m];
        int st, in;
        std::cout<<"Enter start and interval\n";
        std::cin>>st>>in;
        std::cout<<"Your random matrix size "<<n<<" x "<<m<<"\n";
        for (int i = 0; i<n; i++)
            for (int j = 0; j<m;j++)
                a[i][j]= rand()%in+st; 
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m;j++) 
                std::cout<<a[i][j]<<" ";
        std::cout<<"\n";
        }
       if (n == m){
            std::cout<<"Your transposed matrix is \n";
            for (int i = 0; i<n; i++){
            for (int j = 0; j<m;j++) 
                std::cout<<a[j][i]<<" ";
            std::cout<<"\n";
        }
        }
         else std::cout<<"Matrix should be squaired\n";  
         std::cout<<"Your 10 times multiplicated matrix\n";
            for (int i = 0; i<n; i++){
                for (int j = 0; j<m;j++){
                    a[i][j]*=10;
                    std::cout <<a[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            break;
        }
        case 2: 
        {
            std::cout<<"Enter number n\n";
            std::cin>>n;
            int a[n][n];
            int st, in;
            std::cout<<"Enter start and interval\n";
            std::cin>>st>>in;
            std::cout<<"Your random matrix size "<<n<<" x "<<n<<"\n";
            for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++)
                    a[i][j]= rand()%in+st; 
            for (int i = 0; i<n; i++){
                for (int j = 0; j<n;j++) 
                    std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }
            for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++){
                    if (i == j) a[i][j]*=5;
                    if (j>i) a[i][j] = 0;
                    if (i>j) a[i][j]= sqrt(pow(a[i][j], 2));
                }
                std::cout<<"Your modified matrix\n";
            for (int i = 0; i<n; i++){
                for (int j = 0; j<n;j++) 
                    std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }    
        }
        break;
        case 3:
        {
             std::cout<<"Enter number of rows n\n";
            std::cin>>n;
            int a[n][5];
            int st, in;
            std::cout<<"Enter start and interval\n";
            std::cin>>st>>in;
            std::cout<<"Your random matrix size "<<n<<" x "<<5<<"\n";
            for (int i = 0; i<n; i++)
                for (int j = 0; j<5;j++)
                    a[i][j]= rand()%in+st; 
            for (int i = 0; i<n; i++){
                for (int j = 0; j<5;j++) 
                    std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }
        int sum=0;
        for (int i = 0; i<n; i++){
             float sum=0;
                for (int j = 0; j<5;j++){
                    sum+=a[i][j];
                } 
                std::cout<<"sum of "<< i+1<< " row is "<<sum/5<<"\n";
        }
        }
        break;
        case 4:
        {
        std::cout<<"Enter number n\n";
            std::cin>>n;
            float a[n][n];
            int st, in;
            std::cout<<"Enter start and interval\n";
            std::cin>>st>>in;
            std::cout<<"Your random matrix size "<<n<<" x "<<n<<"\n";
            for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++)
                    a[i][j]= rand()%in+st; 
            for (int i = 0; i<n; i++){
                for (int j = 0; j<n;j++) 
                    std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }
        int max = a[0][0];
        
        for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++) 
                    if (i==j) if (sqrt(pow(a[i][j], 2))>max) max = sqrt(pow(a[i][j], 2));
                std::cout<<"Highest module of main diagonale is "<< max<<"\n";
        for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++) {
                    float div = a[i][j]/max;
                    a[i][j] = div;
                }
                std::cout<<"Your modified matrix\n";
                for (int i = 0; i<n; i++){
                    for (int j = 0; j<n;j++) 
                    std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }
        }
        break;
        case 5:
        {
            std::cout<<"Enter number n\n";
            std::cin>>n;
            float a[n][n];
            int st, in;
            std::cout<<"Enter start and interval\n";
            std::cin>>st>>in;
            std::cout<<"Your random matrix size "<<n<<" x "<<n<<"\n";
            for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++)
                    a[i][j]= rand()%in+st; 
            for (int i = 0; i<n; i++){
                for (int j = 0; j<n;j++) 
                    std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }
        int min = a[0][0];
        for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++){
                    if (i + j == n-1 || i + j>=n) if (a[i][j]< min) {
                        min = a[i][j];
                    }
                }
        std::cout<<"Minimal element is "<<min<<"\n";
        for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++){
                    if (i + j == n-1 || i + j>=n) if (a[i][j] == min) std::cout<<"minimal element at position "<<i<<" "<<j<<"\n";

        }
        }
        break;
        case 6:
        int k;
        std::cout<<"Enter number of rows and columns\n";
        std::cin>>n>>m;
        std::cout<<"Enter row which you want to choose\n";
        std::cin>>k;
        if (k<n){
        int a[n][m];
        int st, in, sum = 0;
        std::cout<<"Enter start and interval\n";
        std::cin>>st>>in;
        std::cout<<"Your random matrix size "<<n<<" x "<<m<<"\n";
        for (int i = 0; i<n; i++)
            for (int j = 0; j<m;j++)
                a[i][j]= rand()%in+st; 
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m;j++) 
                std::cout<<a[i][j]<<" ";
        std::cout<<"\n";
        }
        for (int i = 0; i<n; i++)
            for (int j = 0; j<m;j++){
              if (i ==k){  
            if (a[i][j]< 0){
                sum++;
                a[i][j] = -1;
            }
            if (a[i][j] > 0) a[i][j] = 1;
        }
        }
        
        std::cout<<"Your modified matrix\n";
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m;j++) 
                std::cout<<a[i][j]<<" ";
        std::cout<<"\n";
        }
        std::cout<<"Number of negative numbers is "<<sum<<"\n";
        }
        else std::cout<<"You have less rows that number you entered\n";
        break;
        case 7:{
        int a[5][5];
        for (int i = 0; i<5; i++)
            for (int j = 0; j<5;j++) a[i][j] = 0;
        std::cout<<"Enter first 5 elements of your arrray\n";
        int i = 0;
        for (int j = 0; j<5; j++) std::cin>>a[i][j];
            for (int i = 1; i<5; i++)
                for (int j = 0; j<5;j++)  a[i][j] = a[i - 1][j]* a[0][j];
            
         for (int i = 0; i<5; i++){
            for (int j = 0; j<5;j++)  std::cout<<a[i][j]<<" ";  
            std::cout<<"\n";
         }
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

    
