#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[], int N , double B[]){
    double sum = 0 , sumsquare=0 , sumt=1 , sumd = 0 ; 
    int i=0 , j=0 , k=0 , l=0;
    while(i<N){
        sum = sum + A[i];
        i++;
    }


    B[0] = sum/N;

     while(j<N){
        sumsquare = sumsquare + pow(A[j]-B[0],2);
        j++;
    }

    B[1] = sqrt(sumsquare/N);

     while(k<N){
        sumt = sumt * A[k];
        k++;
    }

    B[2] = pow(sumt , 1.0/N );

    
     while(l<N){
        sumd = sumd + 1/A[l];
        l++;
    }

    B[3] = N/sumd ;

    
    i=0 ;
    B[4] = A[0];
    B[5] = A[0];

    while(i<N){


      if(A[i] > B[4]){

        B[4] = A[i] ;

      }

      if(A[i] < B[5]){

        B[5] = A[i] ;

      }

      i++;

    } 
    

    


}
