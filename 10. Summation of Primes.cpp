#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    long long int sum = 0, check; 
    bool flag = true; 
    for( int i=2; i<2000000; i++ )
    {
        check = i;
        for( int j=2; j<=sqrt(check); j++ )
        {
            if ( check%j == 0 )
            {
                flag = false;
                break;
            }
        }
        if ( flag )
        {
            sum += check;
        }
        flag = true;
    }
    cout<<sum<<endl;
}
