#include <iostream>
using namespace std;

int main(){
    // for loop
    // tracking Daily exercise
    int dailySteps[7] = {600,700,800,900,1000,1200,1400};
    int total_steps = 0;

    for(int day = 0; day < 7 ; day++){
        total_steps += dailySteps[day];
    }
    cout << "Weekly total:"<<total_steps<<endl;
}