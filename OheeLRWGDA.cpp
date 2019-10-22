#include <bits/stdc++.h>
using namespace std;
int main()
{

double xValues[] = {1, 2, 4, 3, 5};
double yValues[] = {1, 3, 3, 2, 5};

double b0Value = 0;
double b1Value = 0;
double learningRate = 0.05;
cout<<"\n\n";
for (int i = 0; i < 30; i ++) {
    int modValue = i % 5;
    double p = b0Value + b1Value * xValues[modValue];
    double errorCalculate = p - yValues[modValue];
    b0Value = b0Value - learningRate * errorCalculate;
    b1Value = b1Value - learningRate * errorCalculate * xValues[modValue];
    cout<<"b0 Value ="<<b0Value<<"\n";
    cout<<"b1 Value ="<<b1Value<<"\n";
    cout<<"Calculated Error ="<<errorCalculate<<"\n\n";
}

    return 0;
}
