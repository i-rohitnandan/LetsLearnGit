#include<iostream>
using namespace std;
void display(int arr[],int size){
    cout<<"array after insertion an element "<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<"\t";
    }
}
    void insert(int arr[], int size, int index, int element){
for(int i=(size-1);i>=index;i--){
    arr[i+1]=arr[i];
}
arr[index]=element;
    }

int main()
{
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<size;i++){
cin>>arr[i];
    }

    int index, element;
cout<<"enter the element which you want to insert"<<endl;
cin>>element;
cout<<"enter the index"<<endl;
cin>>index;
insert(arr,size, index-1, element);
display(arr,size);
return 0;
}