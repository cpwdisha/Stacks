#include <iostream>
#include <stack>
using namespace std;
    //You are given a string, assume that the expression is balanced i.e. the opening and closing brackets match with each other but some can be a pair of extra/needless brackets.
    // You are required to print true if you detect extra brackets and false otherwise.

    // eg : (a+b) + ((c+d)) -> true
    // eg : ((a+b) + (c+d)) -> false 


    bool duplicateB(string str)
    {
        stack<char> st;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] != ')')
            {
                st.push(str[i]);
            }
            else
            {
                if(st.top() == '(')
                    {
                        return true;
                    }
                while(!st.empty() && st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
           
        }
        return false;
    }
    
    int main()
    {
        string exp = "(a+b)+((c+d))";
        cout << duplicateB(exp);

    }