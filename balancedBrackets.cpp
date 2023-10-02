#include <iostream>
#include <stack>
using namespace std;

bool balancedBrackets(string s)
{
    stack<char> brackets;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            brackets.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if(brackets.empty()){
                return false;
            }
                if(s[i] == ')' && brackets.top() == '(')
            {
                brackets.pop();
            }
          
           else  if(s[i] == '}' && brackets.top()== '{')
            {
                brackets.pop();
            }
        
           else if(s[i] == ']' && brackets.top()== '[')
            {
                brackets.pop();
            }
            
            else {
                    return false;
            }
                
        }
    }
    
    return brackets.empty();
}
   
int main()
{
    string s1 = "[(a+b)+{(c+d)*(e/f)}]" ;
    //true
    string s2 = "{(c+d)*(e/f)]}";
    //false
    string s3  = "[(a+b)+{(c+d)*(e/f)}"; 
    string s4 = "]";
    //true
    cout << balancedBrackets(s1) << endl;
    cout << balancedBrackets(s2) << endl;
    cout << balancedBrackets(s3) <<endl;
    cout << balancedBrackets(s4);
}