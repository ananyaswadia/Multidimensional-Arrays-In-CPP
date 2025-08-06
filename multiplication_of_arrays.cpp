//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    cout<<"Enter number of rows for M1: ";
    cin>>r1;
    cout<<"Enter columns for M1: ";
    cin>>c1;
    cout<<"Enter number of rows for M2: ";
    cin>>r2;
    cout<<"Enter number of columns for M2: ";
    cin>>c2;
   
    int m1[r1][c1];
    int m2[r2][c2];
   
    if(c1!=r2){
        cout<<"Invalid rows or columns.";
    }
    else {
    cout<<"Enter elements for a matrix-1: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
         }
    }
   
    cout<<"Matrix 1 is: "<<endl;
    for (int i=0 ; i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<m1[i][j];
             cout<<" ";
        }
        cout<<endl;
    }
   
    cout<<"Enter elements for a matrix-2: "<<endl;
    for (int i=0 ; i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }
   
    cout<<"Matrix 2 is: "<<endl;
    for (int i=0 ; i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<m2[i][j];
             cout<<" ";
        }
        cout<<endl;
    }
   
 
    cout<<"Multiplication of M1 and M2 is: "<<endl;
    for (int i=0; i<r2;i++){
        for(int j=0;j<c1;j++){
            cout<< m1[i][j] * m2[i][j];
        }
        cout<<endl;
    }
   
    }
    return 0;
}


/* output
Enter number of rows for M1: 3
Enter columns for M1: 2
Enter number of rows for M2: 3
Enter number of columns for M2: 4
Invalid rows or columns.

output sample 2:
Enter number of rows for M1: 3
Enter columns for M1: 2
Enter number of rows for M2: 2
Enter number of columns for M2: 4
Enter elements for a 3x3 matrix-1:
1
2
3
4
5
6
Matrix 1 is:
1 2
3 4
5 6
Enter elements for a 3x3 matrix-2:
1
2
3
4
5
6
7
8
Matrix 2 is:
1 2 3 4
5 6 7 8
Multiplication of M1 and M2 is:
1 4
15 24

*/
