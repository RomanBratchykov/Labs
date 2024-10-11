#include <iostream>
#include <cmath>
#include <iostream>
#include <ctime>

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
            int arr[n];
            fillArr(n, arr);
            ShowArr(n, arr);
            std::cout << "Your minimal number is "<<min(n, arr)<<" and your product is "<<dob(n, arr)<<"\n"; 
            break;
        }
        case 2: {
        std::cout << "Enter size of first array \n";
        std::cin >> n;
        int arr1[n];
        fillArr(n, arr1);
        std::cout << "Enter size of array 2\n";
        std::cin >> m;
        int arr2[m];
        fillArr(m, arr2);
         int count = 0, count2 = 0;
         for (int i = 0; i<n; i++) count++;
         for (int i = 0; i<m; i++) count2++;
         if(scalar(arr1, arr2, count, count2) == 1) std::cout<<"not similar size\n";
         else{
            ShowArr(n, arr1);
            ShowArr(m, arr2);
            std::cout<<"Scalar product of two arrays is "<<scalar(arr1, arr2, count, count2)<<"\n";
         }
            break;
        }
        case 3:{
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            int a[n], b[n], c[n];
            fillArr(n, a);
            std::cout<<"Your 1 array is \n";
            ShowArr(n, a);
            fillArr(n, b);
            std::cout<<"Your 2 array is \n";
            ShowArr(n, b);
            Sum(n, a, b, c);
            std::cout<<"Your array(sum of two above) is \n";
            ShowArr(n, c);
        break;
        }
        case 4:{
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            int a[n];
            fillArr(n, a);
            std::cout<<"Your array is \n";
            ShowArr(n,a);
            Even(n, a);
            std::cout<<"Your array in 1`s(odd) and 0`s(even) \n";
            ShowArr(n,a);
            break;
        }
        case 5:
        {
            std::cout << "Enter size of your array \n";
            std::cin >> n;
            int a[n], count = 0;
            fillArr(n, a);
            ShowArr(n,a);
            std::cout<<"minimum value is "<<min(n,a);


            for(int i = 0; i<n; i++) if(a[i] == min(n,a)) count++;
            for(int i = 0; i<n; i++){ 
            if(a[i] == min(n,a)) 
            if(count == 1)
            std::cout<<" and id is "<<i<<"\n";
            }
            
            if (count > 1){ 
               std::cout<<" and id`s are ";
               for(int i = 0; i<n; i++)
               if(a[i] == min(n,a)) std::cout<<i<<", ";
               }
               std::cout<<"\n";  
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
    



