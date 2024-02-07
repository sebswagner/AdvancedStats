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

void Player::setPoints(int points)
{
	PTS = points;
}

void Player::setRebounds(int offensiveRebounds, int defensiveRebounds)
{
	OffensiveRB = offensiveRebounds;
	DeffensiveRB = defensiveRebounds;
	TotalRB = OffensiveRB + DeffensiveRB;
}

void Player::setAssists(int assists)
{
	AST = assists;
}

void Player::setSteals(int steals)
{
	STL = steals;
}

void Player::setBlocks(int blocks)
{
	BLK = blocks;
}

void Player::setAttempts(int totalAttempts, int totalMakes, int threePointAttempts, int threePointMakes)
{
	FGA = totalAttempts;
	FGM = totalMakes;
	ThreePA = threePointAttempts;
	ThreePM = threePointMakes;
}

double Player::getThreePercentage(int ThreePointersMade, int ThreePointersAttempted)
{
	ThreePM = ThreePointersMade;
	ThreePA = ThreePointersAttempted;

	ThreePPercentage = (ThreePM / ThreePA) * 1000;

	cout << "Your three point percentage is: ." << fixed << setprecision(0) << ThreePPercentage;

	return ThreePPercentage;
}

double Player::getFieldGoalPercentage(double FieldGoalsMade, double FieldGoalsAttempted)
{	
	this->FGM = FieldGoalsMade;
	this->FGA = FieldGoalsAttempted;

	this->FGPercentage = (this->FGM / this->FGA) * 1000;

	cout << "Your field goal percentage is: ." << fixed << setprecision(0) << this->FGPercentage;
	return this->FGPercentage;
}

double Player::getFreeThrowPercenrage(int FreeThrowsMade, int FreeThrowsAttempted)
{
	FTM = FreeThrowsMade;
	FTA = FreeThrowsAttempted;

	FTPercentage = (FTM / FTA) * 1000;

	cout << "Your free throw percentage is: ." << fixed << setprecision(0) << FTPercentage;

	return 0.0;
}

int Player::getPlusMinus(int plusMinus)
{

	return 0;
}

void Player::getTrueShootings()
{
	TrueShootingAttempts = (FTA * 0.44 + FGA) * 1000;

	TrueShootingPercentage = (PTS / (2 * TrueShootingAttempts)) * 1000;

	cout << "True shooting attempts: ." << fixed << setprecision(0) << TrueShootingAttempts << endl;

	cout << "True shooting percentage: ." << fixed << setprecision(0) << TrueShootingPercentage << endl;
}

void Player::getEffectiveFGP()
{
	EffectiveGoalPercentage = ((FGM + 0.5 * ThreePM) / FGA) * 1000;

	cout << "Effective field goal percentage: ." << fixed << setprecision(0) << EffectiveGoalPercentage << endl;
}

void Player::getORBpercentage()
{
	OffensiveReboundPercentage = ((OffensiveRB * (40 / 5)) / (MinutesPlayed * (teamORB + oppDRB))) * 100;

	cout << "Deffensive rebound percentage: " << fixed << setprecision(1) << OffensiveReboundPercentage << endl;
}

void Player::getDRBpercentage()
{
	DeffensiveReboundPercentage = ((DeffensiveRB * (40 / 5)) / (MinutesPlayed * (teamDRB + oppORB))) * 100;

	cout << "Deffensive rebound percentage: " << fixed << setprecision(1) << DeffensiveReboundPercentage << endl;
}

void Player::getTRBpercentage()
{
	TotalReboundPercentage = ((TotalRB * (40 / 5)) / (MinutesPlayed * (teamTRB + oppTRB))) * 100;

	cout << "Deffensive rebound percentage: " << fixed << setprecision(1) << TotalReboundPercentage << endl;
}

void Player::getASTPercentage()
{
	AssistPercentage = (100 * AST / (((MinutesPlayed / (40 / 5)) * TeamFG) - FGM)) * 100;

	cout << "Assist percentage: " << fixed << setprecision(1) << AssistPercentage << endl;
}
