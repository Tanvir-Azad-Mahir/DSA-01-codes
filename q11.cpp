#include<iostream>
using namespace std;

int linearsearch(int arr[],int target){

    for(int i=0;i<=5;i++){
      
      if(arr[i]==target){
           return i+1;
      }
      
    }
        return -1;
}
int main(){

int arr[]={5,3,8,1,9};
int target =7;

int result =linearsearch(arr,target);

cout<<"searching completed :"<<result;






}