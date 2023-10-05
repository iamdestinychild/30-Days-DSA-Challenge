#include <iostream>
#include <climits>
using namespace std;
int divide(int dividend,int divisor){
    if (dividend==INT_MIN&&divisor==-1){
        return INT_MAX;
    }
    int sign=(dividend < 0)^(divisor<0)?-1:1;
    long long ldividend=abs((long long)dividend);
    long long ldivisor=abs((long long)divisor);
    long long quotient=0;
    while (ldividend>=ldivisor){
        long long temp=ldivisor,multiple=1;
        while(ldividend>=(temp<<1)){
            temp<<=1;
            multiple<<=1;
        }
        ldividend-=temp;
        quotient+=multiple;
    }
    return sign*static_cast<int>(quotient);
}
int main() {
    int dividend, divisor;
    cout<<"Enter dividend:";
    cin>>dividend;
    cout<<"Enter divisor:";
    cin>>divisor;
    int result=divide(dividend,divisor);
    cout<<"Result:"<<result<<endl;
    return 0;
}
