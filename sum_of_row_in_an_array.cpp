#include <iostream>
using namespace std;
int main() {
int rows,colm;
cout<<"Enter number of rows:"<<endl;
cin>>rows;
cout<<"Enter number of columns: ";
cin>>colm;
int arr[10][10];
cout<<"Enter the elements of the matrix:\n";
for(int i=0;i<rows;i++){
    for(int j=0;j<colm;j++){
        cin>>arr[i][j];
    }
}
cout<<"\nSum of each row:\n";
for(int i=0;i<rows;i++){
    int sum=0;
    for(int j=0;j<colm;j++){
        sum=sum+arr[i][j];
    }
    cout<<"Sum of Row "<<i+1<<"="<<sum<<endl;
}

    return 0;
}
