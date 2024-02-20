#pragma once
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

// #ifndef PLAYER_H  For some reason this doesn't work
#define PLAYER_H

class Player {
protected:
    string playerName, position;
    int playerNumber;

public:
    void setPlayerName(string name, int teamNumber);
};

class opposingPlayer :public Player {
public:

private:
    
};

class myPlayer :public Player {
public:
    

    void setPlayerStats(int MinutesPlayed, int SecondsPlayed, double FieldGoalsMade, double FieldGoalsAttempted, double ThreePointersMade, double ThreePointersAttempted, double FreeThrowsMade, double FreeThrowsAttempted, int OffensiveRebounds, int DeffensiveRebounds, int Assists, int Blocks, int Turnovers, int PersonalFouls);
    void getBasicBoxScoreStats();
    void calculateAdvancedStatistics();

    // Basic statistics

    double getFieldGoalsMade();
    double getFieldGoalsAttemtped();
    double getThreePointersMade();
    double getThreePointersAttemtped();
    double getFreeThrowsMade();
    double getFreeThrowsAttemtped();

    double getFieldGoalPercentage();
    void getThreePointPercentage();    
    void getFreeThrowPercentage();
    

    string getName();
    int getMinutesPlayed();
    int getPlusMinus(int plusMinus);


    // Advanced metrics

    void getTrueShooting();
    void getEffectiveFGPercentage();
    void getORBpercentage();
    void getDRBpercentage();
    void getTRBpercentage();
    void getASTPercentage();
    void getThreePointAttemptRate();
    void getFreeThrowAttemptRate();
    void getStealPercentage();
    void getBlockPercentage();
    void getTurnoverPercentage();
    void getUsagePercentage();

private:
    int MinutesPlayed, SecondsPlayed, inGameTime;
    double FGA, FGM, FGPercentage;
    double ThreePM, ThreePA, ThreePPercentage;
    double FTM, FTA, FTPercentage;
    int OffensiveRB, DeffensiveRB, TotalRB;
    int AST = 0;
    int BLK = 0;
    int TOV = 0;
    int PTS = 0;
    int STL = 0;
    int PF = 0;
    int plusMinus = 0;


    // prebaci u team.cpp
    int teamORB , teamDRB, teamTRB;
    int teamFTA, teamFTM, teamTOV;
    double teamFGM, teamFGA;

    //opponents Metrics
    int oppPossesions;
    int oppORB, oppDRB, oppTRB;
    int oppFGA, opp3PA;

    //advanced metrics   

    double ThreePointAttemptRate, FreeThrowAttemptRate;
    double TrueShootingAttempts, TrueShootingPercentage;
    double EffectiveFieldGoalPercentage;
    double OffensiveReboundPercentage, DeffensiveReboundPercentage, TotalReboundPercentage;
    double AssistPercentage;
    double StealPercentage, BlockPercentage, TurnoverPercentage, UsagePercentage;
    

    //pointeri


};