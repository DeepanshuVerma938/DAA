 #include<iostream>
 #include<cstdlib>
 using namespace std;

void paircount(int arr[],int size,int key){
    int i,j,diff=0,c=0;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            diff = abs(arr[i]-arr[j]);
                if(diff == key){
                    c++;
                } 
            }
        }
    
    if(c==0)
    cout << "No pair found";
    else
    cout << c << endl;
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

        cout << "Enter Key: ";
        cin>>key;
        
        paircount(arr,size,key);

        t--;
    }
}