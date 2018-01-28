/******************************************************************************

https://www.youtube.com/watch?v=RVghp_caLec

*******************************************************************************/

#include <iostream>
#include <unordered_set>
#include <cstring>

using namespace std;

int numJewlesInStones (string J, string S);

int main()
{
    string Jewels = "aA";
    string Stone = "aAAbbbb";
    
    cout << numJewlesInStones (Jewels, Stone);
    
    return 0;
}

int numJewlesInStones (string J, string S)
{
    int res = 0;
    
    unordered_set<char> jewels;
    for(int i=0;i<J.size();i++)
    {
        jewels.insert(J[i]);
    }

    for(int i=0;i<S.size();i++)
    {
        if(jewels.find(S[i]) != jewels.end())
        {
            
            res++;
            cout<< S[i] << " is in set" <<endl;
        }
        else
        {
            cout<<"not found"<<endl;
    
        }
    }
    return res;
}
