#include <iostream>
#include <cmath>
#include <iostream>
#include <ctime>
#include <vector>

 int n, m;


void Sum(int n,  int a[], int b[], int c[]){
    std::cout<<"Your sum of vectors is \n";
    for(int i = 0; i<n; i++) c[i] = a[i]+b[i];
}

void fillArr(int n, int arr[]){
    int st, in;
    std::cout<<"Enter start and interval\n";
    std::cin>>st>>in;
    for (int i = 0; i<n; i++)arr[i]= rand()%in+st; 
}

void ShowArr(int n, int arr[]){
    
     for (int i = 0; i<n; i++) {
        std::cout<<arr[i]<<" ";
        
     }
     std::cout<<"\n";
}

int min(int n, int arr[]) {
    int min = arr[0];
   for (int i = 0; i<n; i++){
    if (arr[i]<min) min = arr[i];
   }
   return min;
}

int dob(int n,int arr[]){
    int dob = 1;
    for (int i = 0; i<n; i++){
    if (arr[i]>0)  dob *= arr[i];
   }
   return dob;
}

int scalar(int arr[], int arr2[], int count, int count2){
    
    if (count == count2){
        int sum = 0;
        for (int i = 0; i<n ; i++){
            sum+=arr[i]+arr2[i];
        }
        return sum;
    }
    else return 1;
}

void Even(int n, int arr[]){
    for(int i = 0; i<n; i++){
        if(arr[i]%2 == 0) arr[i] = 0;
        else arr[i] = 1;
    }
}

void Sort_asc(int n, int arr[]){
    for(int i = 0; i<n ; i++){
       for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
}


int main() {
    srand(time(0));
    int vari;
    do{
        std::cout << "Enter number of task (1-5), 0 to quit\n";
        std::cin >> vari;
        switch (vari) {
        case 1: {
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            if (n != 0){

            
            int arr[n];

            fillArr(n, arr);
            ShowArr(n, arr);
            for(int i = 0; i<n; i++){
            if (arr[i] == 0)
            {
              for(int j = i; j<n; j++)
            {
                
                int t = arr[j]; 
                arr[j] = arr[j - 1];
                arr[j-1] = t; 
            }
            
             for(int j = i; j<n; j++){
                int t = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j+1] = t;  
            }
            n--; 
            n--;
        }
        }
        ShowArr(n, arr);
            }
            else std::cout<<"size of array is 0, cant do anything, enter higher value.\n";
            break;
        }
        case 2: {
        std::cout << "Enter size of your array \n";
        std::cin >> n;
        int arr[n];
        fillArr(n, arr);
        ShowArr(n, arr);
        int sum;
        for (int i = 0; i<n; i++){
            sum = 0;
            for (int j = i+1; j<n; j++){
                sum+=arr[j];  
            }
            arr[i]=sum;
        }
        ShowArr(n, arr);
            break;
        }
        case 3:{
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            int arr[n];
            fillArr(n, arr);
            ShowArr(n, arr);
            int sum = 0;
            std::vector<int> v, vec;
            for(int i = 0; i<n; i++){
                if (arr[i]>=-5 && arr[i]<=5){
                    sum+=arr[i];
                    v.push_back(i);
                }
            }
            for(int i = 0; i<n; i++){
                if (arr[i]%2 != 0 || arr[i] == 0){
                for (int j = i; j < n - 1; j++){
                    int t = arr[j]; 
                    arr[j] = arr[j + 1];
                    arr[j+1] = t;    
                }
            n--;
            i--;
            }
            }
            Sort_asc(n, arr);
            std::cout<<"Your elements in range of [-5; 5] is have indesec ";
            for (int i = 0; i<v.size(); i++) std::cout<<v[i]<<" ";
            std::cout<<"and sum of this elements is "<<sum<<"\n";
            std::cout<<"Your array of even numbers in ascending order ";
            ShowArr(n, arr);
        break;
        }
        case 4:
        {
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            int arr[n];
            fillArr(n, arr);
            ShowArr(n, arr);
            int count = 0, sum = 0, k = 2*n, new_arr[k], size = 0;
            for (int i = 0; i<n;i++){
                if (arr[i]%2 == 0 && arr[i] != 0){
                    count++;
                    sum+=arr[i];
                }
                }
                for (int i = 0; i<n;i++){
                if(arr[i]>10){
                    new_arr[size++] = 0;
                    
                }
                new_arr[size++] = arr[i];
            }
            ShowArr(size , new_arr);
            break;
        }
        case 5:
        {
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            int arr[n];
            fillArr(n, arr);
            ShowArr(n, arr);
            int max = arr[0], count = 0, sum;
            for (int i = 0; i<n; i++)if(max<arr[i]) max = arr[i];
            for (int i = 0; i<n; i++) if(arr[i] == max) count++;
            switch (count){
                case 1:
                sum = max;  
                count = 0;
                for (int i = 0; i<n; i++){
                        if (arr[i] == max){
                            for (int j = i; j<n-1; j++)
                            {
                                int t = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = t;
                            }
                            n--;
                            
                            }
                }  
                ShowArr(n, arr);
                max = 0;
                for (int i = 0; i<n; i++)if(max<arr[i]) max = arr[i];
                sum+=max;
                for(int i = 0; i<n; i++) if (arr[i] == max) count++;
                if (count == 2)sum+=max;
                else {
                    for (int i = 0; i<n; i++){
                        if (arr[i] == max){
                            for (int j = i; j<n-1; j++)
                            {
                                int t = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = t;
                            }
                            n--;
                            
                            }
                }  
                n--;
                max = 0;
                for (int i = 0; i<n; i++)if(max<arr[i]) max = arr[i];
                sum+=max;
                }
                std::cout<<"your sum is "<<sum<<"\n";
                break;
                case 2:
                sum = 2*max;
                for (int i = 0; i<2; i++){
                    for (int i = 0; i<n; i++){
                        if (arr[i] == max){
                            for (int j = i; j<n-1; j++)
                            {
                                int t = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = t;
                            }
                            n--;
                        }
                    }
                }
                    ShowArr(n, arr);
                    max = 0;
                    for (int i = 0; i<n; i++)if(max<arr[i]) max = arr[i];
                    std::cout<<"Your sum is "<<sum+max<<"\n";
                break;
                default:
                std::cout<<"Your sum is "<<3*max<<"\n";
                break;
            }
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
    



