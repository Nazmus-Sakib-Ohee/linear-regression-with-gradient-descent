#include <bits/stdc++.h>
using namespace std;
int main()
{
//Coded with explanations By Md.Nazmus Sakib Ohee (CSE 30002).

//initializing the loop count variable.
int loopFor;

//initializing b0 variable with a value of 0.
double b0Value = 0;

//initializing b1 variable with a value of 0.
double b1Value = 0;

//printing message for user to insert the number of loops for the x,y inputs
cout<<"Enter the total number of inputs pair\n";

//takes input for number of loops
cin>>loopFor;
cout<<"\n";

//initializing the xValues variable with indexes up to loopFor.
double xValues[loopFor];

//initializing the yValues variable with indexes up to loopFor.
double yValues[loopFor];


//initializing learningRate variable.
double learningRate;

cout<<"Enter the learning rate\n";
//takes input for learningRate
cin>>learningRate;
cout<<"\n";
//loop start from index 0
for(int j=0;j<loopFor;j++){

    cout<<"\nEnter The value of x"<<j+1<<"\n";

    //takes input for xValues
    cin>>xValues[j];
    cout<<"\n";

    cout<<"Enter The value of y"<<j+1<<"\n";

    //takes input for yValues
    cin>>yValues[j];
    cout<<"\n";
}


cout<<"\n\n";

//number of loops for the prediction is loopPrediction

//initializing loopPrediction variable.
int loopPrediction;

//takes input for loopPrediction
cout<<"Enter the number of loop for prediction \n";
cin>>loopPrediction;
cout<<"\n";

for (int i = 0; i < loopPrediction; i ++) {

    //number of inputs available is equal to loopFor

    //calculating Mod value
    int modValue = i%loopFor;

    //calculating hypothesis value
    double hypo = b0Value + b1Value*xValues[modValue];

     //calculating error
    double errorCalculate = hypo-yValues[modValue];

    //calculating b0 value
    b0Value = b0Value-learningRate*errorCalculate;

    //calculating b1 value
    b1Value = b1Value-learningRate*errorCalculate*xValues[modValue];

    //printing b0 value
    cout<<"b0 Value at loop "<<i<<" is ="<<b0Value<<"\n";

    //printing b1 value
    cout<<"b1 Value at loop "<<i<<" is ="<<b1Value<<"\n";

    //printing error value
    cout<<"Calculated Error ="<<errorCalculate<<"\n\n";
}

    return 0;
}
