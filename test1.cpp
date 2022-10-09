#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void Modify_array(int arr[],int n){
 int temp[n];
 int flag =true;
 int large= n-1,small=0;

 for(int i=0;i<n;i++){
    if(flag){
        temp[i]=arr[large--];
        flag=false;
    }
    else{
        temp[i]=arr[small++];
        flag=true;
    }
 }
 for(int i=0;i<n;i++){
    arr[i]=temp[i];
 }
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Modify_array(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}