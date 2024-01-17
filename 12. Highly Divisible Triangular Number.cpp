#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int sum = 0, count = 0;
    long long int num, i = 0; 

    while ( count <= 100 )
    {
        count = 0;
        i++;#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int sum = 0, count = 0;
    long long int num, i = 0; 

    while ( count <= 500 )
    {
        count = 0;
        i++;
        num = (i*(i+1))/2;
        for( int j=1; j<=sqrt(num); j++ )
        {
            if ( num%j == 0 )
                count+=2;
            if ( j*j == num )
                count--;
        }
    }
    cout<<num;
    return 0;
}

        num = (i*(i+1))/2;
        for( int j=1; j<=num; j++ )
        {
            if ( num%j == 0 )
                count++;
        }
    }
    cout<<num;
    return 0;
}
