#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

#include "Player.h"
#include "Team.h"

// bbreference for advanced stats
// https://www.basketball-reference.com/about/glossary.html#:~:text=True%20shooting%20percentage%20is%20a,is%20FGA%20%2B%200.44%20*%20FTA.

int main() {
   /*
    double FieldGoalsMade;
    double FieldGoalsAttempted;
    double FGPercentage;
    Player Probni;

    double FreeThrowMakes;
    double FreeThrowAttempts;
    int points;

    int turnover;
    int minutes, seconds;
    int teamFTA, teamFGA, teamTOV;



    //  testing of FieldGoal, ThreePointers and FreeThrow percentages
 
    cout << "Input how many field goals you've made:" << endl;

    cin >> FieldGoalsMade;

    cout << "Input how many field goals you've attepmted:" << endl;

    cin >> FieldGoalsAttempted;

    Probni.setFieldGoals(FieldGoalsMade, FieldGoalsAttempted);
    Probni.getFieldGoalPercentage();

    // testing of advanced metrics

    cout << "Input how many point's you've scored:" << endl;
    cin >> points;
    
    Probni.setPoints(points);

    cout << "Input how many free throws you've made:" << endl;
    cin >> FreeThrowMakes;

    cout << "Input how many free throws you've attepmted:" << endl;
    cin >> FreeThrowAttempts;

    Probni.setFreeThrows(FreeThrowMakes, FreeThrowAttempts);
    Probni.getTrueShooting();



    // testing of UsagePercentage

    cout << "Input how minutes did the player play:" << endl;
    cin >> minutes;
    cout << "Input how seconds did the player play:" << endl;
    cin >> seconds;
    Probni.setMinutesPlayed(minutes, seconds);

    cout << "Input how free throws did the team attempt:" << endl;
    cin >> teamFTA;
    cout << "Input how field goals did the team attempt:" << endl;
    cin >> teamFGA;
    cout << "Input how turnovers did the team have:" << endl;
    cin >> teamTOV;

    cout << "Input how many turnovers did the player have:" << endl;
    cin >> turnover;
    Probni.setTurnovers(turnover);

    Probni.getUsagePercentage();
    */
    int teamORB, teamDRB, teamTRB;
    int teamFTA, teamFTM, teamTOV;
    double teamFGM, teamFGA;

    Player Probni;    
    int teamOffensiveRB = 0, opponnentDefensiveRB = 0;
    int offensiveJumps = 0, deffensiveJumps = 0;
    int minutes = 0, seconds = 0;

    cout << "Input players defensive and offensive rebounds: " << endl;
    cin >> offensiveJumps >> deffensiveJumps;
    Probni.setRebounds(offensiveJumps, deffensiveJumps);

    cout << "Input minues and seconds played for the player: " << endl;
    cin >> minutes >> seconds;
    Probni.setMinutesPlayed(minutes, seconds);

    cout << "Input your teams offensive rebounds and oppponents defensive rebound: " << endl;
    cin >> teamOffensiveRB >> opponnentDefensiveRB;

    Probni.settemporarySettingFunction(teamOffensiveRB, opponnentDefensiveRB);

    Probni.getORBpercentage();

    return 0;
    }


