#include<iostream>
#include<conio.h>
#include<string.h>
#include<stack>

using namespace std;

int priority(char c){
    if(c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='$')
        return 3;
    else if(c=='^')
        return 4;
    else
        return 0;
}

void intopost(char s[], int n){
    stack<char> st;
    string ans = "";
    for(int i=0; i<n; i++){
        if(s[i]==' ')
            continue;
        else if(s[i]>='a' && s[i]<='b')
            ans += s[i];
        else if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')'){
            char temp = st.top();
            while(temp != '('){
                ans += temp;
                st.pop();
                temp = st.top();
            }
            st.pop();
        }
        else{
            char temp = st.top();
            if(priority(temp) >= priority(s[i])){
                char t = st.top();
                ans += t;
                st.pop();
                st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
    cout<<ans;
    }
}

int main()
{
    char str[] = "(a+b)*(c-d)";
    intopost(str,11);
    getch();
    return 0;
}