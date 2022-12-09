//Grace Meredith
//CS202 Project 7: Adventure Game
//7 August 2020

#include "player.h"
#include "orc.h"
#include "sword.h"
#include "shield.h"

#include <iostream>
#include <string>
using namespace std;

int getChest(Player& player1);
int getBag(Player& player1);
void fightV1(Player& player1, Orc& badGuy1);
void fightV2(Player& player1, Orc& badGuy1);
void fightV3(Player& player1, Orc& badGuy1);
void fightV4(Player& player1, Orc& badGuy1);
void flee();
void displayPlayerStats( Player& player1);
void displayOrcStats(Orc& badGuy1);


int main(){
	int chestChoice, bagChoice, fightOrFlee; 
	string playerName; 
	Player player1;
	Orc badGuy1;

	cout << "What's your player's name? ";
	cin >> playerName;
	player1.setName(playerName);

	cout << "***CHOOSE YOUR OWN ADVENTURE***" << endl;
	
	chestChoice = getChest(player1);

	bagChoice = getBag(player1); 

	cout << endl;
	cout << "A giant Orc approaches!" << endl << "Do you fight or flee? 1 - fight 2 - flee" << endl;
	cin >> fightOrFlee;

	if(fightOrFlee == 1){
		if(chestChoice == 1 && bagChoice == 1){
			fightV1(player1, badGuy1);
		}

		else if(chestChoice == 1){
			fightV2(player1, badGuy1);
		}

		else if(bagChoice == 1){
			fightV3(player1, badGuy1);
		}

		else{
			fightV4(player1, badGuy1);
		}
	}
	else{
		flee();
	}

	return 0;
}

int getChest(Player& player1){
	int userChoice;

	cout << "You're walking through the woods and come upon a chest. " << endl << "Do you open it?" << endl << "1 - yes 2 - no" << endl;
	cin >> userChoice;

	if(userChoice == 1){
		string swordName = "Devilish Diver sword";
		int DamagePoints = 8, ParryPoints = 3;
		Sword player1Sword;

		cout << endl;
		cout << "You found the \"Devilish Dicer\" sword!" << endl << "It causes 8 damage when striking and can block 3 damage when parrying. " << endl;
		player1Sword.setSwordName(swordName);
		player1Sword.setDamage(DamagePoints);
		player1Sword.setParry(ParryPoints);

		player1.addSword(player1Sword);

		cout << endl;
		cout << "Current Stats: " << endl;
		displayPlayerStats(player1); 

		return userChoice;
	}
	
	else {

		cout << endl;
		cout << "As you pass the chest, you stub your toe on it and lose a health point" << endl; 
		
		int attack = 1;
		player1.attacked(attack);

		cout << endl;
		cout << "Current Stats: " << endl;
		displayPlayerStats(player1);
		return userChoice; 
	}
}

int getBag(Player& player1){
	int userChoice;

	cout << endl;
	cout << "As you pass a pond, you notice a bag on the ground." << endl << "Do you open it?" << endl << "1 - yes 2 - no" << endl;
	cin >> userChoice;

	if(userChoice == 1){
		string shieldName = "Wall of Ice shield";
		int ShieldPoints = 6;
		Shield player1Shield;

		cout << "You found the \"Wall of Ice\" shield!" << endl << "It can block 6 damage when struck." << endl;
		player1Shield.setShieldName(shieldName);
		player1Shield.setShieldPoints(ShieldPoints);

		player1.addShield(player1Shield);
		cout << endl;
		cout << "Current Stats: " << endl;
		displayPlayerStats(player1);

		return userChoice;
	}

	else{
		cout << endl;
		cout << "While passing the pond, your foot gets wet and eventually you get a blister. Lose a health point. " << endl;

		int attack = 1; 
		player1.attacked(attack);

		cout << endl;
		cout << "Current Stats: " << endl;
		displayPlayerStats(player1);
		return userChoice;
	}
}

void fightV1(Player& player1, Orc& badGuy1){
	Sword badGuySword = badGuy1.getSword(), goodGuySword = player1.getSword();
	
	int goodAttack = goodGuySword.getDamage();
	int badAttack = badGuySword.getDamage();
	int goodHealth = player1.getHealthPoints(), badHealth = badGuy1.getHealthPoints();

	displayPlayerStats(player1);
	displayOrcStats(badGuy1);

	while(goodHealth > 0 && badHealth > 0){
		cout << endl;
		cout << "You're winning!" << endl;
		cout << "The orc takes 4 and you take 3 damage!" << endl;
		
		player1.attacked(badAttack);
		player1.block();
		badGuy1.attacked(goodAttack);
		badGuy1.block();

		displayPlayerStats(player1);
		displayOrcStats(badGuy1);

		goodHealth = player1.getHealthPoints();
		badHealth = badGuy1.getHealthPoints();
	}

	cout << "You vanquish the loathsome ogre with sword and shield!!" << endl;
}

void fightV2(Player& player1, Orc& badGuy1){
	Sword badGuySword = badGuy1.getSword(), goodGuySword = player1.getSword();
	
	int goodAttack = goodGuySword.getDamage();
	int badAttack = badGuySword.getDamage();
	int goodHealth = player1.getHealthPoints(), badHealth = badGuy1.getHealthPoints();

	displayPlayerStats(player1);
	displayOrcStats(badGuy1);

	while(goodHealth > 0 && badHealth > 0){
		cout << endl;
		cout << "You have a sword to fight with! But no shield and can only parry :(" << endl;
		cout << "The orc takes 4 and you take 6 damage!" << endl;
		
		player1.attacked(badAttack);
		player1.block();
		badGuy1.attacked(goodAttack);
		badGuy1.block();

		displayPlayerStats(player1);
		displayOrcStats(badGuy1);

		goodHealth = player1.getHealthPoints();
		badHealth = badGuy1.getHealthPoints();
	}

	cout << "You die but take the ogre down with you!" << endl;
}

void fightV3(Player& player1, Orc& badGuy1){
	Sword badGuySword = badGuy1.getSword();
	int Attack = badGuySword.getDamage();
	int goodHealth = player1.getHealthPoints();

	displayPlayerStats(player1);
	displayOrcStats(badGuy1);

	while(goodHealth > 0){
		cout << endl;
		cout << "You only have a shield and can do the orc no harm!" << endl;
		cout << "The orc takes 0 and you take 3 damage!" << endl;
		player1.attacked(Attack);
		player1.block();

		displayPlayerStats(player1);
		cout << endl;
		displayOrcStats(badGuy1);
		cout << endl;

		goodHealth = player1.getHealthPoints();
	}
	
	cout <<"Our brave hero has perished against the orc! :'(" << endl;

}

void fightV4(Player& player1, Orc& badGuy1){
	cout << "You can't fight or defend yourself. :'(" << endl;
	cout << "Plus, you have a stubbed toe and a blister. You die!" << endl;
}

void flee(){
	cout << "As you turn to run, you trip on a log and the orc steps on you. You die!" << endl;
}

void displayPlayerStats(Player& player1){

	Sword Thor = player1.getSword(); 
	Shield CaptainAmerica = player1.getShield(); 
	cout << player1; 

	if(Thor.getSwordName() != "none"){
		cout << Thor;  
	}

	if(CaptainAmerica.getShieldName() != "none"){
		cout << CaptainAmerica; 
	}
}

void displayOrcStats(Orc& badGuy1){
	Sword Loki = badGuy1.getSword();

	cout << endl << badGuy1;
	cout << Loki;
}