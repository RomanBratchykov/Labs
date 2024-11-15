#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    while(true){
    std::cout<<"enter size of array\n";
    int n;
    std::cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) a[i] = rand()%10;
    for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
    std::cout<<"\n";
    std::cout<<"Choose one of the following\n";
    std::cout<<"1.show array\n2.sum of the elements\n3. middle average \n4.sort array\n5.add number X after value Y\n6.escape\n";
    int vari;
    std::cin>>vari;
    switch(vari){
        case 1:{
        for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
        std::cout<<"\n";
        break;
        }
        case 2:{
        int sum = 0;
        for(int i =0; i<n; i++) sum+=a[i];
        std::cout<<"sum of the elements is "<<sum<<"\n";
        break;
        }
        case 3:{
        float avg = 0.0;
        for(int i = 0; i<n; i++) avg+=a[i];
        std::cout<<"middle average is "<<avg/n<<"\n";
        break;
        }
        case 4:{
        std::cout<<"how do you want to sort the array(1 - ascending, 2 descending)\n";
        int sort;
        std::cin>>sort;
        switch(sort){
            case 1:{
            for(int i = 0; i<n; i++){
                for(int j = i; j<n; j++){
                    if(a[i]>a[j]){
                        int t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
                }
            }
            for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
            std::cout<<"\n";
            break;
            }
            case 2:{
                for(int i = 0; i<n; i++){
                    for(int j = i; j<n; j++){
                        if(a[i]<a[j]){
                            int t = a[i];
                            a[i] = a[j];
                            a[j] = t;
                }
            }
        }
        for(int i = 0; i<n; i++) std::cout<<a[i]<<" ";
            std::cout<<"\n";
        break;
        }
        default:std::cout<<"choose one of the above\n";
        break;
        }
        break;
        }
        case 5:{
        int x,y, count = 0;
        std::cout<<"Enter number X\n";
        std::cin>>x;
        std::cout<<"Enter number Y\n";
        std::cin>>y;
        for(int i = 0; i<n; i++)
            if(a[i] == y) count++;
            n+=count;
        if(count == 0) std::cout<<"There is no such number\n";
        
        int arr[n], j =0;
        for(int i = 0; i<n; i++){
            arr[j++] = a[i];
                if(a[i] == y ){
                    arr[j++] = x;
                    }
                }
           
            for(int i = 0; i<n; i++) std::cout<<arr[i]<<" ";
            std::cout<<"\n";
        
        break;
        }
        case 6: return 1;
        default:
        std::cout<<"choose one of the above\n";
        break;

    }
    }
    return 0;

}