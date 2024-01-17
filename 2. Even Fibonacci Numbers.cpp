#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int sum = 0, count = 0;
    
    int ppre = 0, pre = 1, curr = 1;

    for( int i=0; curr<=4000000; i++ )
    {
        curr = ppre + pre;
        if ( curr%2 == 0 )
            sum+= curr;
        ppre = pre;
        pre = curr;
    } 
    cout<<sum<<endl;
    return 0;
}