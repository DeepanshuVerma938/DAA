#include<iostream>
using namespace std;

void linear_search(){
    int n,key,f = 0,i;
    cout <<"\nEnter array size";
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    cout <<"Enter key element\n";
    cin >> key;
    for(i=0; i<n; i++){
        if(key == arr[i]){
        f = 1;
        break;
        }
    }
    if(f == 1){
        cout << "Present";
        cout << "\nTotal comparisons: " << i+1;
    }
    else
    cout << "not present";
}

int main(){
    int no;
    cout << "Enter no of test cases";
    cin >> no;
    while(no > 0){
        linear_search();
        no--;
    }
    
    
}