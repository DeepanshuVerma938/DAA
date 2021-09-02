 #include<iostream>
 using namespace std;

int binarySearchf(int arr[],int l, int r,int k){
    int res = -1;
    while(l<=r){

        int mid  = l+(r-l)/2; 
        if(arr[mid]==k)
        {
            res = mid;
            r = mid -1;
        }
        else if(arr[mid]<k)
        l = mid+1;
        else
        r = mid-1;
    }
    return res;
}

int binarySearchl(int arr[],int l, int r,int k){
    int res = -1;
    while(l<=r){

        int mid  = l+(r-l)/2; 
        if(arr[mid]==k)
        {
            res = mid;
            l = mid  +1;
        }
        else if(arr[mid]<k)
        l = mid+1;
        else
        r = mid-1;
    }
    return res;
}

int main(){
    int t;
    cout << "Test Case:";
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
        cout<<"Enter key:";
        cin>>key;

        int val = binarySearchf(arr,0,size,key);
        if(val != -1)
        {
            int val1 = binarySearchl(arr,0,size,key);
            int copy = (val1 - val) + 1;
            cout << key << " - " << copy << endl;
        }
        else
        cout << "Key not present";

        t--;
    }
}