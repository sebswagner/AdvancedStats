#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define TEAM_H

class Team {
	public:
		void addPlayer(const myPlayer& player);
		
		void calcSumOfTeamStats();

		void calculateTeamStats();
		void calcualteTeamAdvancedStats();
		void ListAllPlayers();

		double getTeamTrueShooting();
		double getTeamEffectiveFGPercentage();
		double getTeamORBpercentage();
		double getTeamDRBpercentage();
		double getTeamTRBpercentage();
		double getTeamASTPercentage();
		double getTeamThreePointAttemptRate();
		double getTeamFreeThrowAttemptRate();

		void setOpponentTeamStatistics(int opponentPossessions, int opponentORB, int opponentDRB, int opponentTRB, int opponentFGA, int opponent3PA);

	private:
		std::vector<myPlayer> playerList;

		int oppPossessions;
		int oppORB;
		int oppDRB;
		int oppTRB;
		int oppFGA;
		int opp3PA;		
		
		int teamMinutesPlayed, teamSecondsPlayed, teamInGameTime;
		double teamFGA, teamFGM, teamFGPercentage;
		double teamThreePM, teamThreePA, teamThreePPercentage;
		double teamFTM, teamFTA, teamFTPercentage;
		int teamOffensiveRB, teamDeffensiveRB, teamTotalRB;
		int teamAST = 0;
		int teamBLK = 0;
		int teamTOV = 0;
		int teamPTS = 0;
		int teamSTL = 0;
		int teamPF = 0;
		int teamplusMinus = 0;

		//team 

		double TeamThreePointAttemptRate, TeamFreeThrowAttemptRate;
		double TeamTrueShootingAttempts, TeamTrueShootingPercentage;
		double TeamEffectiveFieldGoalPercentage;
		double TeamOffensiveReboundPercentage, TeamDeffensiveReboundPercentage, TeamTotalReboundPercentage;
		double TeamAssistPercentage;
		double TeamStealPercentage, TeamBlockPercentage, TeamTurnoverPercentage, TeamUsagePercentage;

		//team Advanced stats

		double TeamThreePointAttemptRate, TeamFreeThrowAttemptRate;
		double TeamTrueShootingAttempts, TeamTrueShootingPercentage;
		double TeamEffectiveFieldGoalPercentage;
		double TeamOffensiveReboundPercentage, TeamDeffensiveReboundPercentage, TeamTotalReboundPercentage;
		double TeamAssistPercentage;
		double TeamStealPercentage, TeamBlockPercentage, TeamTurnoverPercentage, TeamUsagePercentage;
};