#include <iostream>
#include <cmath>
using namespace std;
void projectTimeCalculation(int neededHours, int daysAvailable, int numberOfWorkers);
int main() {
    int neededHours, daysAvailable, numberOfWorkers;
    
    cout<<" Enter the needed hours: ";
    cin >> neededHours;
    cout<<" Enter the days that the firm has: ";
    cin >> daysAvailable;
    cout<<" Enter the number of all workers: ";
    cin >> numberOfWorkers;
    
    projectTimeCalculation(neededHours, daysAvailable, numberOfWorkers);

}


void projectTimeCalculation(int neededHours, int daysAvailable, int numberOfWorkers) {
    float effectiveWorkingDays = daysAvailable * 0.9;
    float totalHoursAvailable = (effectiveWorkingDays * numberOfWorkers * (8 + 2));
    
    if (totalHoursAvailable >= neededHours) {
        cout << "Yes!" << totalHoursAvailable - neededHours << " hours left." << endl;
    } 
    if(totalHoursAvailable < neededHours) {
        cout << "Not enough time!" << neededHours - totalHoursAvailable << " hours needed." << endl;
    }
}


