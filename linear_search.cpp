#include <iostream>
using namespace std;

int main() {
    int n ,arr[100],search,i;
    cout<<"enter a range of array"<<endl;
    cin>> n;
    cout<<"enter the value of array of range  "<<n<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter a number u want to search";
    cin>>search;
    for(i=0; i<n; i++){
        if(arr[i]==search){
            cout<<"number is found at position"<<i+1;
            break;
        }
        
    }
    
    
        return 0;
    }
