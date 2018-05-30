#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the diagonalDifference function below.
 */
int diagonalDifference(vector<vector<int>> a) {
    int sum1=0;
    int sum2=0; 
    int n=a.size();
    
    for(int i = 0, j = n-1; i < n; i++, j--){
        sum1+=a[i][i];
        sum2+=a[j][i];
    }
    int result =abs(sum1-sum2);
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> a(n);
    for (int a_row_itr = 0; a_row_itr < n; a_row_itr++) {
        a[a_row_itr].resize(n);

        for (int a_column_itr = 0; a_column_itr < n; a_column_itr++) {
            cin >> a[a_row_itr][a_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a);

    fout << result << "\n";

    fout.close();

    return 0;
}