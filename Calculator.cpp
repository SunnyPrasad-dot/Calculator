#include<iostream>
using namespace std;
int Addition(int a , int b){
    return a + b ;
}

int Subtraction(int a , int b){
    return a - b ;
}

int Multiplication(int a , int b){
    return a * b ;
}

float Division(float a , float b){
    return a / b ;
}

int Modular(int a , int b){
    return a % b ;
}

int main(){
    int Choice ;
    do{
        cout<<endl;
        cout<<"Press 1 for Addition " << endl;
        cout<<"Press 2 for Subtraction." << endl;
        cout<<"Press 3 for Multiplication." << endl;
        cout<<"Press 4 for Division." << endl;
        cout<<"Press 5 for Modular." << endl;
        cout<<"Press 0 for Exit." << endl;
        cout<<"Enter Your Choice : ";
        cin>>Choice;

        switch (Choice)
        {
        case 1:
        int x , y ;
        cout<<"Enter First Number : " ;
        cin>>x ;
        cout<<"Enter second Number : " ;
        cin>>y ;
        cout<<"Addition of "<<x<<" and "<<y<<" is "<<Addition(x,y)<< endl ;
            break;

        case 2:
        int a , b ;
        cout<<"Enter First Number : " ;
        cin>>a ;
        cout<<"Enter second Number : " ;
        cin>>b ;
        cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<Subtraction(a,b)<< endl ;
            break;
        
        case 3:
        int c , d ;
        cout<<"Enter First Number : " ;
        cin>>c ;
        cout<<"Enter second Number : " ;
        cin>>d ;
        cout<<"Multiplication of "<<c<<" and "<<d<<" is "<<Multiplication(c,d)<< endl ;
            break;
        
        case 4:
        float e , f ;
        cout<<"Enter First Number : " ;
        cin>>e ;
        cout<<"Enter second Number : " ;
        cin>>f ;
        cout<<"Division of "<<e<<" and "<<f<<" is "<<Division(e,f)<< endl ;
            break;
        
        case 5:
        int g , h ;
        cout<<"Enter First Number : " ;
        cin>>g ;
        cout<<"Enter second Number : " ;
        cin>>h ;
        cout<<"Modular of "<<g<<" and "<<h<<" is "<<Modular(g,h)<< endl ;
            break;

        case 0:
        cout<<"Exited Successfully " << endl;
        
        default:
        cout<<"Invalid Choice. Please try again." << endl;
            break;
        }
    }
    while(Choice != 0);

    
    return 0 ;
}
