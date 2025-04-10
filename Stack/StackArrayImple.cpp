//
// Created by mamta on 09-04-2025.
//
/**
* Implementing Stack Using Array, Dynamic Array and LL
* Operation , find topElement , Number of Elements, isFull, isEmpty, insert, deleteTopElement
*/
#include <bits/stdc++.h>
using namespace std;

int maxSize = 100;
// Insert Element to stack
void push(int arr[], int& top, int element){
  if(top>=maxSize){
    cout<<"Stack Overflow"<<endl;
  }
  else {
    cout<<"Element to be inserted:"<<element<<endl;
    arr[++top] = element;
}
}
// Remove an element
void pop(int arr[], int& top) {
  if(top==-1){
    cout<<"Stack underflow"<<endl;
  }
  else top--;
  cout<<"Element to be removed:"<<arr[top]<<endl;
}
// Top Element of stack
int topElement(int arr[], int top){
  if(top==-1) return -1;
  else return arr[top];
 }
 // Is full stack
int isFull(int arr[], int top){
   if(top==maxSize-1) return 1; else return 0;
 }
//  Is Empty Stack
int isEmpty(int arr[], int top){
  if(top==-1) return 1; else return 0;
}
int StackSize(int arr[], int top) {
  return top+1;
}
int main(){
  int arr[maxSize];
  int top = -1;
  push(arr, top, 1) ;
  push(arr, top, 2) ;
  pop(arr, top) ;
  cout<<"IS Empty"<<isEmpty(arr, top)<<endl;
  cout<<"Is Full"<<isFull(arr, top)<<endl;
  cout<<"Stack Size"<<StackSize(arr, top)<<endl;
  return 0;
  }