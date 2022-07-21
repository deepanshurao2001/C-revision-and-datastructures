#include<iostream>
using namespace std;
void maxelement(int array[],int size){
  int i=0;
  int max=INT_MIN;
  while(i<=size)
  {
  if(max<array[i]){
  max=array[i];
  }
  i++;
 
  }
cout<<"Max element in array is:"<<max<<endl;
}
void minelement(int array[],int size){
  int i=0;
  int min=INT_MAX;
  while(i<=size)
  {
  if(min>array[i]){
  min=array[i];
  }
  i++;
 
  }
cout<<"MIN element in array is:"<<min<<endl;
}
void entervalue(int number[],int size)
{
  for(int i=0;i<size;i++){
    cin>>number[i];
  }
}
void printarray(int array[], int size){
  for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int number[10];
  cout<<"Size of array is:"<< sizeof(number)/sizeof(int)<<endl ;
  cout<<"enter the value of array:"<<endl;
  entervalue(number,sizeof(number)/sizeof(int));
  printarray(number, sizeof(number)/sizeof(int)); 
  maxelement(number, sizeof(number)/sizeof(int));
  minelement(number, sizeof(number)/sizeof(int));
}


