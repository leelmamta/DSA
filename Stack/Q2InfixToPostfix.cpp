//
// Created by mamta on 09-04-2025.
//
/**
* Convert Infix expression to postfix
ALGO
a) CReate a stack
b) for each character t in the input stream
    if( ch is operand )
    cout<<operand<<endl;
    else if (ch is right parenthesis)
    pop & cout<< st.top() until corresponding is encountered.
    else ch is operator
    pop and output tokens until one of lower priority than ch is encountered or left parenthesis is encountered
    or the stack is empty
    push it
*/
#include<bits/stdc++.h>
using namespace std;
int priority(char ch){
  if(ch=='(')
    return 0;
  if(ch=='+'||ch=='-')
    return 1;
  if(ch=='*'||ch=='/')
    return 2;
}

string convertInfixToPostfix(string s){
  string res = "";
  stack<char> st;
  for(char ch:s){
//    Assuming we have  0 to 9 elements c
    if(ch>='0'&&ch<='9'){
     res.push_back(ch);
    } // Assuming we will encounter only () these brackets
    else if(ch==')') {
      while(!st.empty()&&st.top()!='(') {
         res.push_back(st.top()); st.pop();
        };
    } else {
        while(!st.empty()&&priority(st.top())>=priority(ch)) {

          res.push_back(st.top()); st.pop();
        }}
    }

while (!st.empty()) {
  res.push_back(st.top()); st.pop();
}
  return res;
}
int main(){
  int testcases;
  cout<<"Enter the number of testcases"<<endl;
  cin>>testcases;
  while(testcases--){
      cout<<"Enter the parenthesis string : ";
      string str;
      cin>>str;
      cout<<convertInfixToPostfix(str);
  }

  return 0;
  }