#include <iostream>

using namespace std;
int smallestNumberIntheArray( int arr[],int size){
    int minnum=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<minnum)
        {
            minnum=arr[i];
        }

    }
return minnum;
}

int main(){
       int arr[]={23,43,45,65,76,7,8};
       int size=sizeof(arr)/sizeof(arr[0]);
     int smallest=smallestNumberIntheArray( arr,size);
cout<< "the smalest  number in the array is = "<<smallest<<endl;
 

    return 0;
}