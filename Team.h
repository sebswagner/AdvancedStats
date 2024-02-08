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

	private:
		std::vector<Player> playerList;
		
		
		
};