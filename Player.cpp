#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

#include "Player.h"

void Player::setPlayerName(string name, int teamNumber)
{
	playerName = name;
	playerNumber = teamNumber;
}

void Player::setMinutesPlayed(int minutes, int seconds)
{
	this->MinutesPlayed = minutes;
	this->SecondsPlayed = seconds;

	this->inGameTime = (this->MinutesPlayed * 60) + this->SecondsPlayed;
}

void Player::setPoints(int points)
{
	this->PTS = points;
}

void Player::setRebounds(int offensiveRebounds, int defensiveRebounds)
{
	this->OffensiveRB = offensiveRebounds;
	this->DeffensiveRB = defensiveRebounds;
	this->TotalRB = this->OffensiveRB + this->DeffensiveRB;
}

void Player::setAssists(int assists)
{
	this->AST = assists;
}

void Player::setSteals(int steals)
{
	this->STL = steals;
}

void Player::setBlocks(int blocks)
{
	this->BLK = blocks;
}

void Player::setTurnovers(int turnover)
{
	this->TOV = turnover;
}

void Player::setFieldGoals(double FieldGoalsMade, double FieldGoalsAttempted)
{
	this->FGM = FieldGoalsMade;
	this->FGA = FieldGoalsAttempted;
}

void Player::setThreePointers(double ThreePointersMade, double ThreePointersAttempted)
{
	this->ThreePM = ThreePointersMade;
	this->ThreePA = ThreePointersAttempted;
}

void Player::setFreeThrows(double FreeThrowsMade, double FreeThrowsAttempted)
{
	this->FTM = FreeThrowsMade;
	this->FTA = FreeThrowsAttempted;
}

void Player::getThreePointPercentage()
{
	this->ThreePPercentage = (this->ThreePM / this->ThreePA) * 1000;

	cout << "Your three point percentage is: ." << fixed << setprecision(0) << this->ThreePPercentage;
}

void Player::getFieldGoalPercentage()
{	
	this->FGPercentage = (this->FGM / this->FGA) * 1000;

	cout << "Your field goal percentage is: ." << fixed << setprecision(0) << this->FGPercentage << endl;
}

void Player::getFreeThrowPercenrage()
{
	this->FTPercentage = (this->FTM / this->FTA) * 1000;

	cout << "Your free throw percentage is: ." << fixed << setprecision(0) << this->FTPercentage;
}

string Player::getName()
{
	return this->playerName;
}

void Player::settemporarySettingFunction(int prviKurac, int drugiKurac)
{
	teamORB = prviKurac;
	oppDRB = drugiKurac;
}

int Player::getPlusMinus(int plusMinus)
{

	return 0;
}

void Player::getTrueShooting()
{
	this->TrueShootingAttempts = (this->FTA * 0.44 + this->FGA);

	this->TrueShootingPercentage = (this->PTS / (2 * this->TrueShootingAttempts));

	this->TrueShootingAttempts = this->TrueShootingAttempts * 1000;
	this->TrueShootingPercentage = this->TrueShootingPercentage * 1000;


	cout << "True shooting attempts: ." << fixed << setprecision(0) << this->TrueShootingAttempts << endl;

	cout << "True shooting percentage: ." << fixed << setprecision(0) << this->TrueShootingPercentage << endl;
}

void Player::getEffectiveFGPercentage()
{
	this->EffectiveFieldGoalPercentage = ((this->FGM + 0.5 * this->ThreePM) / this->FGA) * 1000;

	cout << "Effective field goal percentage: ." << fixed << setprecision(0) << this->EffectiveFieldGoalPercentage << endl;
}

void Player::getORBpercentage()
{
	this->OffensiveReboundPercentage = ((100 * this->OffensiveRB * ((static_cast<double>(240) * 60) / 5)) / (this->inGameTime * (teamORB + oppDRB)));

	cout << "Deffensive rebound percentage: " << fixed << setprecision(1) << this->OffensiveReboundPercentage << "%" << endl;
}

void Player::getDRBpercentage()
{
	this->DeffensiveReboundPercentage = ((100 * this->DeffensiveRB * (static_cast<double>(240) / 5)) / (this->inGameTime * (teamDRB + oppORB)));

	cout << "Deffensive rebound percentage: " << fixed << setprecision(1) << this->DeffensiveReboundPercentage << "%" << endl;
}

void Player::getTRBpercentage()
{
	this->TotalReboundPercentage = ((100 * this->TotalRB * (static_cast<double>(240) / 5)) / (this->inGameTime * (teamTRB + oppTRB)));

	cout << "Deffensive rebound percentage: " << fixed << setprecision(1) << this->TotalReboundPercentage << "%" << endl;
}

void Player::getASTPercentage()
{
	this->AssistPercentage = (100 * this->AST / (((this->inGameTime / (static_cast<double>(240) / 5)) * teamFGM) - this->FGM));

	cout << "Assist percentage: " << fixed << setprecision(1) << this->AssistPercentage << "%" << endl;
}

void Player::getThreePointAttemptRate()
{
	this->ThreePointAttemptRate = (this->ThreePA / this->FGA) * 1000;

	cout << "Three point attempt rate is: ." << fixed << setprecision(3) << this->AssistPercentage << endl;
}

void Player::getFreeThrowAttemptRate()
{
	this->FreeThrowAttemptRate = (this->FTA / this->FGA) * 1000;

	cout << "Free throw attempt rate is: ." << fixed << setprecision(3) << this->FreeThrowAttemptRate << endl;
}

void Player::getStealPercentage()
{
	this->StealPercentage = ((100 * (this->STL * (static_cast <double>(240) / 5))) / (this->inGameTime / oppPossesions));

	cout << "Steal percentage: " << fixed << setprecision(1) << this->StealPercentage << endl;
}

void Player::getBlockPercentage()
{
	this->BlockPercentage = ((100 * (this->BLK * (static_cast <double>(240) / 5))) / (this->inGameTime * (oppFGA - opp3PA)));

	cout << "Block percentage: " << fixed << setprecision(1) << this->BlockPercentage << endl;
}

void Player::getTurnoverPercentage()
{
	this->TurnoverPercentage = ((100 * this->TOV) / (this->FGA + 0.44 * this->FTA * this->TOV));

	cout << "Turnover percentage: " << fixed << setprecision(1) << this->TurnoverPercentage << endl;
}

void Player::getUsagePercentage()
{
	this->UsagePercentage = (100 * (this->FGA + 0.44 * this->FTA * this->TOV) * (static_cast <double>(40) / 5)) / (this->inGameTime * (teamFGA + 0.44 * teamFTA * teamTOV));

	cout << "Usage percentage: " << fixed << setprecision(3) << this->UsagePercentage << endl;
}
