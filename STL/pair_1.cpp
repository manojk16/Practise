#include <iostream>
#include <string>
using namespace std;



int main(){

pair<int, int>pair1,pair3;
pair<int,string>pair2;

pair1=make_pair(1,2);
pair2=make_pair(1,"Manoj");
pair3=make_pair(2,4);

cout << pair1.first <<endl;
cout << pair2.second <<endl;


	return 0;
}