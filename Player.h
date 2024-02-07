#pragma once
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

// #ifndef PLAYER_H  For some reason this doesn't work
#define PLAYER_H


class Player {
public:
    void setPlayerName(string name, int teamNumber);
    void setPoints(int points);
    void setRebounds(int offensiveRebounds, int defensiveRebounds);
    void setAssists(int assists);
    void setSteals(int steals);
    void setBlocks(int blocks);
    void setAttempts(int totalAttempts, int totalMakes, int threePointAttempts, int threePointMakes);
    double getThreePercentage(int ThreePointersMade, int ThreePointersAttempted);
    double getFieldGoalPercentage(double FieldGoalsMade, double FieldGoalsAttempted);
    double getFreeThrowPercenrage(int FreeThrowsMade, int FreeThrowsAttempted);
    int getPlusMinus(int plusMinus);

    // Advanced metrics
    void getTrueShootings();
    void getEffectiveFGP();
    void getORBpercentage();
    void getDRBpercentage();
    void getTRBpercentage();
    void getASTPercentage();
    

private:
    int playerNumber;
    string playerName, position;
    int MinutesPlayed;
    int SecondsPlayed;
    double FGA, FGM, FGPercentage;
    double ThreePM, ThreePA, ThreePPercentage;
    double FTM, FTA, FTPercentage;
    int OffensiveRB, DeffensiveRB, TotalRB;
    int AST = 0;
    int BLK = 0;
    int TOV = 0;
    int PTS = 0;
    int STL = 0;
    int PersonalFouls = 0;
    int plusMinus = 0;

    int teamORB, teamDRB, teamTRB;
    int oppORB, oppDRB, oppTRB;
    double TeamFG;

    //advanced metrics 

    double TrueShootingAttempts, TrueShootingPercentage;
    double EffectiveGoalPercentage;
    double OffensiveReboundPercentage, DeffensiveReboundPercentage, TotalReboundPercentage;
    double AssistPercentage;

    //pointeri


};