/*
 * Anargam.cpp
 *
 *  Created on: 06-May-2018
 *      Author: manoj
 */
#include <iostream>
#include <vector>
#include <math.h>
#include <climits>



using namespace std;

int number_needed(string a, string b) {
    vector <int> c1(26);
    vector <int> c2(26);
    int i, j;
    for (i = 0; i < a.length(); i++) {
        c1[a[i]-97]++;
        cout << "Value's of string a "<< c1[a[i]-97]<<endl;
    }
    for (j = 0; j < b.length(); j++) {
        c2[b[j]-97]++;
    }
    int t = 0;
    for (i = 0; i < 26; i++) {
        //cout<<c1[i]<<","<<c2[i]<<" ";
        t = t + abs(c1[i] - c2[i]);
    }
    //cout<<endl;
    return t;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
