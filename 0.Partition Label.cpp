/************
Conor's partition_lable
Code_Report ep 0.
https://www.youtube.com/watch?v=djnKt1MD5DQ
 
*************/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> partition_lable(string &s);
int max(int &a, int &b);
int main()
{
    string s = "ababcbacadefegdehijhklij";
    vector<int> ans;
    ans = partition_lable(s);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
vector<int> partition_lable(string &s)
{
    vector<int> ans;
    unordered_map<char,int> map;
    for(int i=0;i<s.size();i++)
    {
        map[s[i]] = i;
    }
    int i = 0;
    while(i < s.size() )
    {
        int start = i;
        int end = map[s[i]];
        int j = i + 1;
        
        while(j < end)
        {
            end = max(end,map[s[j]]);
            j++;
        }
        ans.push_back(end-start+1);
        i = end +1;
    }
    return ans;
}
int max(int &a, int &b)
{
    return a > b ? a : b;
}