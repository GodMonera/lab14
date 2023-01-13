#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool img[][M] ,int s ,int x ,int y ){

    int i , j  ;

    for(i = 0; i< N ; i++){
        for(j =0 ; j< M ; j++){
            if( sqrt(pow(i-x,2) + pow(j-y,2)) <= s-1){
                img[i][j] = 1 ;
            }
        }
    }


}


void showImage(const bool img[][M]){
    int i, j;

   for(int o=0; o<M + 2 ; o++){ 
    cout <<"-";
   }


   cout << "\n";

    for(i=0; i < N ;i++){
       cout << "|";
        
        for(j=0; j < M ;j++){

            if(img[i][j] == true){
                cout << "*";
            }else {
                cout << " ";
            }

      
        }
        cout << "|";
        cout << "\n";
    }

    for(int f=0; f<M + 2 ; f++) {
        cout <<"-";
        }

    cout << "\n";


}