#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
     //int total_cost =meal_cost+meal_cost*(static_cast<double>(tip_percent)/100)+(static_cast<double>(tax_percent)/100);
    double total_cost =meal_cost+meal_cost*((double)tip_percent/100)+meal_cost*((double)tax_percent/100);

    cout<<"The total meal cost is " <<fixed<<setprecision(0)<<total_cost << "dollar"<<endl;
    
    return 0;
}