//
// Created by mamta on 09-04-2025.
//
/**
* -> Given a String of {[( })] braces , check if the parenthesis are balanced or not
*/
#include<bits/stdc++.h>
using namespace std;

bool checkParenthesis(string str){
  // Algorithm You may have characters in between
  // (A+B)+(C-D)
  // ((A+B)+(C-D)
  // ((A+B)+[C-D])
  stack<char> st;
  for(char ch:str){
    if(ch=='('||ch=='{'||ch=='['){
      st.push(ch);
    }else if(ch==')'||ch=='}'||ch==']'){
      if(st.empty()) return false;
      if((st.top()=='('&&ch==')')||(st.top()=='{'&&ch=='}')||(st.top()=='['&&ch==']'))
        st.pop();
      else return false;
    } }

  return st.empty();
  }

int main(){
  cout<<"Enter the number of testcases. "<<endl;
  int t;
  cin>>t;
  while(t--) {
    cout<<"Enter the string to check its parenthesis"<<endl;
    string str;
    cin>>str;
    cout<<"is Parenthesis Balanced : "<<checkParenthesis(str)<<endl;
  }

  return 0;
  }