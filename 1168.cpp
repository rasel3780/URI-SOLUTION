#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long i, led;
    string number;
    cin>>n;
    while(n--)
    {
        led = 0;
        cin>>number;
        for(i=0; i<number.length(); i++)
        {
            if(number[i]=='1')led = led + 2;
            if(number[i]=='2')led = led + 5;
            if(number[i]=='3')led = led + 5;
            if(number[i]=='4')led = led + 4;
            if(number[i]=='5')led = led + 5;
            if(number[i]=='6')led = led + 6;
            if(number[i]=='7')led = led + 3;
            if(number[i]=='8')led = led + 7;
            if(number[i]=='9')led = led + 6;
            if(number[i]=='0')led = led + 6;
        }
        cout<<led<<" leds"<<"\n";
    }
    return 0;
}
