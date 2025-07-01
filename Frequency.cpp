#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[26]= {0};
    string s;
    cin>>s;
    int size = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<size ; i++)
    {
        a[s[i]-97]++;

    }
    for (int i = 0; i <s.size(); i++)
    {
        if (a[i] > 0)
        {
            char ch = 'a' + i;
            cout << ch << " = " << a[i] << endl;
        }
    }


    return 0;
}

