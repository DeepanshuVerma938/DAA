 #include<iostream>
 #include<cmath>
 using namespace std;

int min(int n1,int n2){
    if(n1>n2)
    return n2;
    else return n1;
}


int jumpSearch(int arr[], int n,int k){
    double jump = sqrt(n); 
    double steps = jump;
    double prev = 0;
    while(arr[min(steps,n)-1] < k){
        prev = steps;
        steps += jump;
        if (prev >= n)
        return -1;
    }
    while(arr[int(prev)] < k){
        prev = prev+1;
        if(prev == min(steps,n))
        return -1;

    }
    if(arr[int(prev)] == k)
    return prev;

    return -1;
    
}

int main(){
    int t;
    cout << "Test Case: ";
    cin>>t;

    while(t){
        int size,key;
        cout << "Enter Size: ";
        cin>> size; 

        int arr[size];
        cout<<"Enter array elements: ";
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        cout<<"Enter key: ";
        cin>>key;

       cout << jumpSearch(arr,size,key);
        
        t--;
    }
}