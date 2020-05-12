/*
Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
An empty string is also valid.
Example 1:
Input: "()"
Output: True
Example 2:
Input: "(*)"
Output: True
Example 3:
Input: "(*))"
Output: True
Note:
The string size will be in the range [1, 100].

*/

/*
Runtime: 0 ms
Memory Usage: 6.1 MB
Runtime beats 100.00 % of cpp submissions.
*/

class Solution {
public:
    bool checkValidString(string s) {
        int bal=0,n=s.length();
        
        for(int i=0;i<n;i++)
        {
             if(s[i]=='(' || s[i]=='*')
             {
                 bal++;
                 
             }
             // else if(s[i]==')')
             // {
             //  --bal;   
             // }
            
            else if(--bal==-1)
            {
                return false;
            }

            
        }        
        bal=0;
         for(int i=n;i>=0;i--)
        {
             if(s[i]==')' || s[i]=='*')
             {
                 bal++;
             }
             // else if(s[i]=='(')
             // {
             //  --bal;   
             // }
            else if(bal--==-1)
            {
                return false;
            }
            
        }
        
        return true;
        
    }
};