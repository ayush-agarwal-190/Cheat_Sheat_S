#include<bits/stdc++.h>
using namespace std;

void Set(vector<vector<int>> &matrix){
int rows = matrix.size(), cols = matrix[0].size();

vector<int> dummy1(rows,-1);
vector<int> dummy2(cols,-1);
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++)
    {
        if(matrix[i][j]==0){
            dummy1[i]=0;
            dummy2[j]=0;
                }
    }
}

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(dummy1[i]==0 || dummy2[j]==0){
            matrix[i][j]=0;
        }
    }
}
}


int main() {
  vector < vector < int >> arr;
  arr = {{0, 0, 0, 0},
        {3, 4, 5, 2}, 
        {1, 3, 1, 5}};
  Set(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}