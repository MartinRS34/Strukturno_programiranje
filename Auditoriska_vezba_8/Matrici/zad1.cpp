#include <iostream>
using namespace std;
int main(){
    int zbir=0,zbir1=0,n,m,matrix[100][100];
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(i%2==0){
                zbir+=matrix[i][j];
            }
            if(j%2==1){
                zbir1+=matrix[i][j];
            }
        }
        //cout<<"Zbir: "<<zbir<<endl<<"Zbir1: "<<zbir1<<endl; //proveka
    }
    cout<<zbir-zbir1;
}