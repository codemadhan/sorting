#include <iostream>

using namespace std;
void enter(int arr[], int n);
void sort(int arr[], int n);
int findindexofmin(int arr[], int a, int b);
void swap(int& a, int& b);
void printarray(int arr[], int a);
int main()
{
    int a;
    cout << "Enter the number of elements in the array: ";
    cin >> a;
    int arr[a];
    cout << "Enter the values in the array: \n ";
    enter(arr,a);
    sort(arr,a);
    printarray(arr,a);
    
    

    return 0;
}
void enter(int arr[], int n){

    for (int i=0; i < n; i++){
        cin >> arr[i]; 
    }
    
}

void sort(int arr[], int n){
    int a;
    for(int i=0; i < n ; i++){
        a = findindexofmin(arr,i,n-1);
        if(arr[i] > arr[a]){
            swap(arr[i],arr[a]);
        }
    }
}
int findindexofmin(int arr[], int a, int b){
    int min=arr[a],index=a;
    for(int i=a; i < b; i++){
        if(min > arr[i+1]){
            min = arr[i+1];
            index = i+1;
        }
        
    }
    return index;
}
void swap(int &a, int &b){
    int m=b;
    b=a;
    a=m;
}

void printarray(int arr[], int a){
    for(int i=0; i < a;i++){
        cout << arr[i] << " ";
    }
}
