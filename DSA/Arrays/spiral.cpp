#include <bits/stdc++.h>

using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix){

    vector<int> result;

    if(matrix.empty()){
        return result;
    }

    int top = 0; int left = 0;
    int right = matrix[0].size()-1;
    int bottom = matrix.size()-1;

    while(top <= bottom && left <= right){

        for(int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;

        for(int i = top; i <= bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;


}

int main(){

    vector<vector<int>> matrix{
        {1,2,3},
        {8,9,4},
        {7,6,5}
    };

    vector<int> spiral = spiralOrder(matrix);

    cout << "Sppiral Order: ";
    for(int num : spiral){
        cout << num << " ";
    }

    return 0;
}



int celebrity(vector<vector<int>>& mat) {
    int n = mat.size();
    if (n == 0) {
        return -1;
    }

    // Step 1: Find the candidate
    int candidate = 0;
    for (int i = 1; i < n; ++i) {
        if (mat[candidate][i] == 1) {
            candidate = i;
        }
    }

    // Step 2: Verify the candidate
    for (int i = 0; i < n; ++i) {
        if (i != candidate && (mat[candidate][i] == 1 || mat[i][candidate] == 0)) {
            return -1;
        }
    }

    return candidate;
}