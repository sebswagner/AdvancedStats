#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define TEAM_H

class Team {
	public:
		void addPlayer(const Player& player);
		void calculateTeamStats();
		void ListAllPlayers();

		void setOpponentTeamStatistics(int opponentPossessions, int opponentORB, int opponentDRB, int opponentTRB, int opponentFGA, int opponent3PA);

	private:
		std::vector<Player> playerList;

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
};