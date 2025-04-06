#include<iostream>
using namespace std;
 int findThirdLargest(int arr[], int size){
if (size<3){
    return -1;
           }
 int first =-1, second = -1, third=-1;
 for (int i=0; i<size;i++)
  if(arr[i]>first){
    third=second;
    second=first;
    first=arr[i];
  }
  else if (arr[i]>second && arr[i]!= first)
  {
    third=second;
    second=arr[i];
  }
else if (arr[i]>third && arr[i]!=second && arr[i]!=first)
{
    third=arr[i];
}
return third;

 }
 int main(){
    int arr[]={12,11,34,77,25,33,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int result=findThirdLargest( arr, size);
    if (result != -1){
    cout <<"the  third largest element is: "<<result<<endl;
    }
    else {
        cout<<"there are not enough unique elements "<<endl;
    }
    return 0;
 }
 