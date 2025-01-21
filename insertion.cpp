#include<iostream>
using namespace std;
int main(){
int n=4;

int arr[]={1,7,2,5};

for(int i=1; i<n ; i++){
int t=arr[i];
int j=i-1;

while (j>=0 && arr[j]>t){
 
     arr[j+1]=arr[j];
     j--;
}
  arr[j+1]=t;

}
 cout<<"by using insertion  sort :";
for(int i=0 ; i <n ; i++){
  cout <<arr[i]<<" ";

}




}