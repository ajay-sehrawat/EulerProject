#include <bits/stdc++.h>
using namespace std;
bool check (int n) 
{ 
    int reverse = 0; 
    int temp = n; 
    while (temp != 0) { 
        reverse = (reverse * 10) + (temp % 10); 
        temp = temp / 10; 
    } 
    return (reverse == n); 
                   
} 
int main() 
{   
    int ans = 0, num =1;
    bool flag = false;
    for ( int i=999; i>99; i-- )
    {
        for (int j=999; j>99; j-- )
        {
            num = i*j;
            if ( check(num) )
            {
                flag = true;
                break;
            }
        }
        if ( flag )
            ans = max(num,ans);
    }
    
    
    cout<<ans;
    return 0;
}
