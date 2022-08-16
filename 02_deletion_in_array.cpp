#include<iostream>
using namespace std;
void deletion(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            for(int j=i;j<(size-1);j++){
                arr[j]=arr[j+1];
            }
        }
    }
}
void display(int arr[],int size){
    cout<<"array after deleting an element"<<endl;
    for(int i=0;i<(size-1);i++){
cout<<arr[i]<<"\t";
    }
}
int main()
{
    int t;
    cout<<"enter the number of test cases"<<endl;
    cin>>t;
    while(t--){
    int size,element,arr[100],index;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<size;i++){
cin>>arr[i];
    }
    cout<<"which element you want to remove from array"<<endl;
    cin>>element;
    deletion(arr, size, element);
    display(arr,size);
    cout<<endl;
    }
return 0;
}