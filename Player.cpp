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

void Player::setPlayerStats(int MinutesPlayed, int SecondsPlayed, double FieldGoalsMade, double FieldGoalsAttempted, double ThreePointersMade, double ThreePointersAttempted, double FreeThrowsMade, double FreeThrowsAttempted, int OffensiveRebounds, int DeffensiveRebounds, int Assists, int Blocks, int Turnovers, int PersonalFouls)
{
	this->MinutesPlayed = MinutesPlayed;
	this->SecondsPlayed = SecondsPlayed;
	this->inGameTime = (this->MinutesPlayed * 60) + this->SecondsPlayed;

	this->FGM = FieldGoalsMade;
	this->FGA = FieldGoalsAttempted;
	this->ThreePM = ThreePointersMade;
	this->ThreePA = ThreePointersAttempted;
	this->FTM = FreeThrowsMade;
	this->FTA = FreeThrowsAttempted;

	this->OffensiveRB = OffensiveRebounds;
	this->DeffensiveRB = DeffensiveRebounds;
	
	this->AST = Assists;
	this->BLK = Blocks;
	this->TOV = Turnovers;
	this->PF = PersonalFouls;
}

void Player::getBasicBoxScoreStats()
{
	this->FGPercentage = (this->FGM / this->FGA) * 1000;
	this->ThreePPercentage = (this->ThreePM / this->ThreePA) * 1000;
	this->FTPercentage = (this->FTM / this->FTA) * 1000;
	this->TotalRB = this->OffensiveRB + this->DeffensiveRB;
	this->PTS = (this->FGM * 2) + (this->ThreePM * 3) + this->FTM;
	/*
	this->getThreePointPercentage();
	this->getFieldGoalPercentage();
	this->getFreeThrowPercenrage();
	*/
}

void Player::calculateAdvancedStatistics()
{
	this->getTrueShooting();
	this->getEffectiveFGPercentage();
	this->getThreePointAttemptRate();
	this->getFreeThrowAttemptRate();
	this->getORBpercentage();
	this->getDRBpercentage();
	this->getTRBpercentage();
	this->getASTPercentage();	
	this->getStealPercentage();
	this->getBlockPercentage();
	this->getTurnoverPercentage();
	this->getUsagePercentage();
}

void Player::getThreePointPercentage()
{
	this->ThreePPercentage = (this->ThreePM / this->ThreePA) * 1000;

	cout << "Your three point percentage is: ." << fixed << setprecision(0) << this->ThreePPercentage;
}

double Player::getFieldGoalsMade()
{
	return this->FGM;
}

double Player::getFieldGoalsAttemtped()
{
	return this->FGA;
}

double Player::getThreePointersMade()
{
	return this->ThreePM;
}

double Player::getThreePointersAttemtped()
{
	return this->ThreePA;
}

double Player::getFreeThrowsMade()
{
	return this->FTM;
}

double Player::getFreeThrowsAttemtped()
{
	return this->FTA;
}

double Player::getFieldGoalPercentage()
{	
	this->FGPercentage = (this->FGM / this->FGA) * 1000;

	//cout << "Your field goal percentage is: ." << fixed << setprecision(0) << this->FGPercentage << endl;

	return this->FGM;
	return this->FGA;
}

void Player::getFreeThrowPercentage()
{
	this->FTPercentage = (this->FTM / this->FTA) * 1000;

	cout << "Your free throw percentage is: ." << fixed << setprecision(0) << this->FTPercentage;
}

string Player::getName()
{
	return this->playerName;
}

int Player::getMinutesPlayed()
{
	this->inGameTime = (this->MinutesPlayed * 60) + this->SecondsPlayed;
	
	return inGameTime;
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
