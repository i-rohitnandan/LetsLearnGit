#include<iostream>
using namespace std;
int linear (int arr[],int size,int element ){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return element;
        }
    }
    return -1; //here -1 will show entered element does not exist in array
cout<<endl;
}
int main()
{
    int t;
    cout<<"enter the number of test cases"<<endl;
    cin>>t;
    while(t--){
    int size,element;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<size;i++){
cin>>arr[i];
    }
    cout<<"which element you want to search"<<endl;
    cin>>element;
    int k= linear(arr, size,element);
    cout<<k;
    }
return 0;
}