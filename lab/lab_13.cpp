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
        std::cout << "Enter number of task (1-5), 0 to quit\n";
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
        std::cout<<"Enter numbers of columns you want to swap\n";
        int k, b;
        std::cin>>k>>b;
        if(k <= m && b <= m){
            for (int i = 0; i<n; i++)
                for (int j = 0; j<m;j++){
                    if(j == k){
                    int temp = a[i][j-1];
                    a[i][j-1] = a[i][b-1];
                    a[i][b-1] = temp;
                    }
                }
                 for (int i = 0; i<n; i++){
            for (int j = 0; j<m;j++) std::cout<<a[i][j]<<" ";
            std::cout<<"\n";
        }
        }
        else std::cout<<"Your matrix dont have that number of columns\n";
            break;
        }
        case 2: 
        {
            std::cout<<"Enter number n\n";
            std::cin>>n;
            double a[n][n];
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
        std::vector<double> v;
        double c;
        for (int i = 0; i<n; i++){
            if(a[i][i] == 0){
                double max = a[i][0];
                    for (int j = 0; j<n; j++)
                        if(max<a[i][j]) max = a[i][j];
                        v.push_back(max);
                        c++;
                     }    
                }
                double count = 0.0;
                for(int i = 0; i<v.size(); i++) count+=v[i];
                std::cout<<"ariphmetic mean from sum of max number of each row is "<<count/c<<"\n";
        }
        break;
        case 3:
        {
           std::cout<<"Enter number n\n";
            std::cin>>n;
            int a[n][n], b[n][n];
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
        std::cout<<"your transposed matrix\n";
           for (int i = 0; i<n; i++){
                for (int j = 0; j<n;j++) 
                    std::cout<<a[j][i]<<" ";
            std::cout<<"\n";
        }
            for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++){
                    b[i][j] = a[i][j]+a[j][i];
                }
            std::cout<<"your sum of matrices\n";
            for (int i = 0; i<n; i++){
                for (int j = 0; j<n;j++) 
                    std::cout<<b[i][j]<<" ";
            std::cout<<"\n";
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
        int min = a[0][0], max = a[0][0];
             for (int i = 0; i<n; i++)
             if(max<a[i][i])max = a[i][i];
             for (int i = 0; i<n; i++)
             if(min>a[i][i])min= a[i][i];
             std::cout<<"Your min is "<<min<<" and max is "<<max<<" and max-min = "<<max-min<<"\n";
            int count = 0;
             for (int i = 0; i<n; i++)
                for (int j = 0; j<n;j++){ 
                    if (i+j+1 == n && a[i][j] == 0){
                      for (int k = 0; k<n; k++)
                        std::cout<<a[k][0]<<" ";
                        std::cout<<"\n";
                        count++;
                        break;
                        break;
                      }
                }
                if(count == 0 ){
                    for(int i = 0; i<n; i++) std::cout<<a[i][n-1]<<" ";
                    std::cout<<"\n";
                    break;
                    } 
                }
                
        
        break;
        case 5:
        {
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
        int c1, c2;
        std::cin>>c1>>c2;
        int sum = 1;
        if(c2<m && c1>0){
        for (int i = 0; i<n; i++)
                for (int j = c1-1; j<c2;j++){
                    sum*=a[i][j];
                }
        std::cout<<"Your result is "<<sum<<"\n";
        }
        else std::cout<<"Your matrix dont have that number of columns\n";
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

    
