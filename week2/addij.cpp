 #include<iostream>
 using namespace std;

void findijk(int arr[],int size){
    int i,j,k,sum = 0,f=0;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            sum = arr[i] + arr[j];
            for(k=0; k<size;k++){
                if(arr[k] == sum){
                    cout <<i+1<<","<<j+1<<","<<k+1<< endl;
                    f = 1;
                } 
            }
        }
    }
    if(f==0)
    cout << "No sequence found";
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
        
        findijk(arr,size);

        t--;
    }
}