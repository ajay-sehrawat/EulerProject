#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int sum = 0, count = 0;
    long long int num= 2;; 
    string power = "";    
    power = to_string(pow(2,1000));
    
    for( int i=0; i<power.size(); i++ )
    {
        sum += (power[i]-'0');
    }
    sum = sum - '.'+'0';
    cout<<sum;
    return 0;
}