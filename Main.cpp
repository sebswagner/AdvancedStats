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
     myPlayer Lillard;

    double oppDRB = 33;
    double oppORB = 7;

    double teamORB = 11;
    double teamDRB = 33;

    Lillard.setPlayerStats(34, 58, 7, 21, 3, 13, 7, 7, 2, 3, 7, 1, 0, 4, 2);
    Lillard.getBasicBoxScoreStats();
    Lillard.printPlayerBasicStats();

    cout << endl;
    /*
    Lillard.getTrueShooting();
    Lillard.getEffectiveFGPercentage();
    Lillard.getThreePointAttemptRate();
    Lillard.getFreeThrowAttemptRate();
    */


    cout << teamORB << " " << oppDRB << endl;




    return 0;
}


