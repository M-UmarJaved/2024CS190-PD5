#include <iostream>
#include <cmath>
using namespace std;
string projectTimeCalculation(int neededHours, int daysAvailable, int numberOfWorkers, string result);
int main() {
    int neededHours, daysAvailable, numberOfWorkers;
    string result;
    
    cout<<" Enter the needed hours: ";
    cin >> neededHours;
    cout<<" Enter the days that the firm has: ";
    cin >> daysAvailable;
    cout<<" Enter the number of all workers: ";
    cin >> numberOfWorkers;
    
    result = projectTimeCalculation(neededHours, daysAvailable, numberOfWorkers,result);
    cout << result;

}


string projectTimeCalculation(int neededHours, int daysAvailable, int numberOfWorkers,string result) {
    float effectiveWorkingDays = daysAvailable * 0.9;
    float totalHoursAvailable = (effectiveWorkingDays * numberOfWorkers * (8 + 2));
    
    if (totalHoursAvailable >= neededHours) {
        result = "Yes!" + to_string(int(totalHoursAvailable - neededHours)) + " hours left.";
	    return result;
    } 
    if(totalHoursAvailable < neededHours) {
        result = "Not enough time!" + to_string(int(neededHours - totalHoursAvailable)) + " hours needed.";
	    return result;
    }
}


