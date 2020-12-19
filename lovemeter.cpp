/*
A program based on the old flames game we used to play as kids
Input: 2 strings (names)
Output: love percentage
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    string s = a + "loves" + b;
    int l=s.length();
    vector<int> v1;
    vector<int> temp;
    vector<char> vc(s.begin(), s.end());
    char ch = '\0';
    int cnt=1;

    while(vc.size() != 0)
    {
        ch = vc[0];
        for(int i=1; i<vc.size(); i++)
        {
            if (vc[i] == ch) cnt++;
        }

        vector<char>::iterator it = vc.begin();
        while(it != vc.end())
        {
            if(*it == ch)
            {
                it = vc.erase(it);
            }
            else
                it++;
        }
        v1.push_back(cnt);
        cnt=1;
    }
    

    l=0;

    while(true)
    {
        l=v1.size();
        for(int i=0; i<(l/2); i++)
        {
            v1[i] = v1[i] + v1[l-1-i];
            v1.pop_back();
        }
        if(v1.size() < 3)
        {
            for(int j: v1) cout<<j;
            break;
        }
    }
}
