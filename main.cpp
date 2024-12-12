#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    long long k , n , m ;
    cin >> k >> n >> m ;
    char s[k] ;
    for(int i = 0 ; i < k ; i++)
    {
        cin >> s[i] ;
    }
    long long g = 0 ;
    long long r = 0 ;
    for(int i = 0 ; i < k ; i++)
    {
        if(s[i]=='G')
        {
            g++;
        }
        else if(s[i]=='R')
        {
            r++;
        }

    }

    if(g>=n)
    {
        cout << "It wasn't easy but I did it";
    }
    else if(r>=m)
    {
        cout << "I will do it";
    }
    else
    {
        cout << "It's not easy at all";
    }

    return 0;
}
