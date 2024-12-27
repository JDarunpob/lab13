#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}


void stat(const double x[],int y,double z[]){
    double sum=0;
    for(int i=0;i < y;i++){
        sum += x[i];
    }
    double mean = 0;
    for(int i=0;i < y;i++){
        mean += pow(x[i]-(sum/y),2);
    }
    double multiall=1;
    for(int i=0;i < y;i++){
        multiall *= x[i];
    }
    double meanfor=0;
    for(int i=0;i < y;i++){
        meanfor += (1.0/x[i]);
    }
    double checkmax;
    for(int i =0;i < y;i++){
        if(x[i]>checkmax){
            checkmax =x[i];
        }
    }
    double checkmin=x[0];
    for(int i =0;i < y;i++){
        if(x[i]<checkmin){
            checkmin =x[i];
        }
    }



    z[0] = sum/y;
    z[1] = sqrt(mean/y);
    z[2] = pow(multiall,1.0/y);
    z[3] = y/meanfor;
    z[4] = checkmax;
    z[5] = checkmin;

 


}