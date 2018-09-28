//
//  main.cpp
//  matrices
//
//  Created by Usuario on 22/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int multmatriz(){
    int n,m,x,z=0,a=0;
    cout<<"Ingrese fila y columna matriz1: ";
    cin>>n>>m;
    int matriz1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Elemento fila: "<<i<<" Elemento columna: "<<j<<": ";
            cin>>x;
            matriz1[i][j]=x;
        }
    }
    int filas1=n;
    cout<<"Ingrese fila y columna matriz2: ";
    cin>>n>>m;
    int matriz2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Elemento fila: "<<i<<" Elemento columna: "<<j<<": ";
            cin>>x;
            matriz2[i][j]=x;
        }
    }
    int matriz3[filas1][m];
    for(int i=0;i<filas1;i++){
        for(int j=0;j<m;j++){
            a=0;
            for(int x=0;x<n;x++){
                z=matriz1[i][x]*matriz2[x][j];
                a=a+z;
            }
            matriz3[i][j]=a;
        }
    }
    for(int y=0;y<filas1;y++){
        for(int q=0;q<m;q++){
            cout<<matriz3[y][q]<<"\t";
        }
        cout<<endl;
    }
    return 0;
        
}
int main(){
    multmatriz();
    return 0;
}

