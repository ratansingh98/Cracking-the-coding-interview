#include<bits/stdc++.h>

using namespace std;

const int n=3;
void rotated_matrix(int matrix[n][n]){

    for(int layer=0;layer<n/3;layer++){
        int first =layer;
        int last = n-1-layer;
        for(int i= first;i<last;i++){
            int offset = i-first;
            int top=matrix[first][i];

            matrix[first][i] =matrix[last-offset][first];

            matrix[last-offset][first] = matrix[last][last-offset];

            matrix[last][last-offset] = matrix[i][last];

            matrix[i][last] = top;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }

}

int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int matrix[n][n];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        matrix[i][j]=i+j;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n\n";
    rotated_matrix(matrix);

    return 0;
}