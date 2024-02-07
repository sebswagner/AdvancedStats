#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

#include "Player.h"




int main() {
    double FieldGoalsMade;
    double FieldGoalsAttempted;
    double FGPercentage;
    Player Probni;


    
    
    cout << "Input how many field goals you've made:" << endl;

    cin >> FieldGoalsMade;

    cout << "Input how many field goals you've attepmted:" << endl;

    cin >> FieldGoalsAttempted;

    /*
    FGPercentage = (FieldGoalsMade / FieldGoalsAttempted) * 1000;

    */


    cin >> FieldGoalsMade;

    Probni.getFieldGoalPercentage(FieldGoalsMade, FieldGoalsAttempted);


    // static_cast<double>

   // cout << "Your field goal percentage is: ." << fixed << setprecision(0) << FGPercentage;

    return 0;
    }


