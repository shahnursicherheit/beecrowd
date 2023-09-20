#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a<=10&&a>=0&&b<=10&&b>=0)
    {
        float x;
        x=((a*2+b*3+c*5)/(2+3+5));
        cout<<"MEDIA = "<<fixed<<setprecision(1)<<x<<endl; // fixed use to fixing the point to start 
    }                                                      // and setprecision use to how many number we need
    return 0;
}