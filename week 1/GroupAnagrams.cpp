/*

Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // sort(strs.begin(),strs.end());       
       vector<vector<string>> a;
        map<string,vector<string>> m;
        for(auto s:strs)
        {
            string s1=s;
            sort(s1.begin(),s1.end());
            m[s1].push_back(s);
                
        }
        for(auto p:m)
        {
            a.push_back(p.second);
        }
        return a;       
        
    }
};
    
