/*

Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

*/

class Solution {
public:
    bool isHappy(int n) {
        vector<int> seen={};
        int sum,curr;
        while(n!=1)
        {sum=0;
         curr=n;
            while(curr!=0)
            {
             sum+=pow(curr%10,2);
             curr/=10;
            }
         if(isFound(seen,sum))
         {return false;}
         seen.push_back(sum);
         n=sum;         
        }       
        return true;        
    }
private:
    bool isFound(vector<int>& v,int key)
    {
        if(find(v.begin(),v.end(),key)!=v.end())
            return true;
        return false;
    }

};