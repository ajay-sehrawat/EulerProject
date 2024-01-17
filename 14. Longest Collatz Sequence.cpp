#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int ans = 0, count = 1, temp = -1;
    long long int check; 

    for( int i=1; i<1000000; i++ )
    {
        check = i;
        while( check != 1 )
        {
            if( check%2 == 0 )
                check = check/2;
            else
                check = (3*check)+1;
            
            count++;
        }
        if ( count > temp ){
            ans = i;
            temp = count;
            }
        count = 1;
    }
    cout<<ans;
    return 0;
}
