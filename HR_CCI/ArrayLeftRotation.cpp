/*
 * ArrayLeftRotation.cpp
 *
 *  Created on: 06-May-2018
 *      Author: manoj
 */

#include <vector>
#include <iostream>


using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {

	for (int rotation = 0; rotation < k; rotation++) {

		int firstElement = a[0];

		for (int i = 0; i < n; i++) {

			a[i] = a[i + 1];

			if (i == (n - 1)) {
				a[i] = firstElement;

			}
		}

	}
return a;
}

int main(){
    int n;
    int k;

    cout <<"Enter the Number of element in to Array as n\n";

    cin >> n ;
    cout << " Number of rotation as K \n";
    cin >> k;
    vector<int> a(n);
    cout <<"Enter The Number of Element\n";
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int>out = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
    	        cout << out[i] << " ";
    	    cout << endl;


    return 0;
}

