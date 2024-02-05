#pragma once
class Player {
public:
    void setPoints(int points);
    void setRebounds(int rebounds);
    void setAssists(int assists);
    void setSteals(int steals);
    void setBlocks(int blocks);
    double getThreePercentage(int ThreePointersMade, int ThreePointersAttempted);
    double getFieldPercentage(int FieldGoalsMade, int FieldGoalsAttempted);
    double getFreeThrowPercenrage(int FreeThrowsMade, int FreeThrowsAttempted);
    int getPlusMinus(int plusMinus);

private:
    int MinutesPlayed;
    int SecondsPlayed;
    int FGA;
    int FGM;
    int ThreePM;
    int ThreePA;
    int TwoPM;
    int TwoPA;
    int FTM;
    int FTA;
    int ORB;
    int DRB;
    int TRB;
    int AST;
    int BLK;
    int TOV;
    int PersonalFouls;
    int plusMinus;

};