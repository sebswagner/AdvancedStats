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
    void setMinutesPlayed(int minutes, int seconds);
    void setPoints(int points);
    void setRebounds(int offensiveRebounds, int defensiveRebounds);
    void setAssists(int assists);
    void setSteals(int steals);
    void setBlocks(int blocks);
    void setTurnovers(int turnover);

    void setFieldGoals(double FieldGoalsMade, double FieldGoalsAttempted);
    void setThreePointers(double ThreePointersMade, double ThreePointersAttempted);
    void setFreeThrows(double FreeThrowsMade, double FreeThrowsAttempted);

    void setPlayerStats(int MinutesPlayed, int SecondsPlayed, double FieldGoalsMade, double FieldGoalsAttempted, double ThreePointersMade, double ThreePointersAttempted, double FreeThrowsMade, double FreeThrowsAttempted, int OffensiveRebounds, int DeffensiveRebounds, int Assists, int Blocks, int Turnovers, int PersonalFouls);
    void getBasicBoxScoreStats();
    void calculateAdvancedStatistics();

    void getThreePointPercentage();
    void getFieldGoalPercentage();
    void getFreeThrowPercenrage();
    

    string getName();

    void settemporarySettingFunction(int prviKuraac, int drugiKurac);

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
    int playerNumber;
    string playerName, position;
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