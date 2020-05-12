/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
Note:

1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
Follow up:

Can you solve it in O(N) time and O(1) space?

*/

/*
Runtime=0ms , 
Runtime beats 77.41% of cpp submissions.

*/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string res_S, res_T;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='#'&&!res_S.empty())
            {
                res_S.pop_back();
            }
            if(i+1<=S.length() && S[i]!='#'&&S[i+1]=='#')
            {
                i=i+1;
            }
            else if(S[i]!='#')// && i+1!=S.length())
            {
                res_S+=S[i];
            }
        }
        //cout<<res_S<<" ";
        for(int i=0;i<T.length();i++)
        {
            if(T[i]=='#'&&!res_T.empty())
            {
                res_T.pop_back();
            }
            if(i+1<=T.length() && T[i]!='#'&&T[i+1]=='#')
            {
                i=i+1;
            }
            else if(T[i]!='#')// && i+1!=S.length())
            {
                res_T+=T[i];
            }
        }
        //cout<<res_T;
        
        
        return res_S==res_T;
    }
};

