#include <iostream>
#include <limits>
#include <iomanip>


using namespace std;
int main(){
    int i=4;
    double d=4.0;
    string s="Hacker Rank"
    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;

    cin >> i1;
    cin >> d1;
    cin.ignore();
    getline(cin,s1);
    s.append(s1);
    cout << i+i1 <<endl<<fixed<<setprecision(1)<<d+d1 <<endl <<s;

    return 0;
}