#include "player.h"

Player::Player(){
	Name = "none";
	healthPoints = 10;
}

Player::Player(string newName, int newHealthPoints, Sword newSword, Shield newShield){
	Name = newName; 
	healthPoints = newHealthPoints;
	playerSword = newSword; 
	playerShield = newShield; 
}

Player::Player(const Player& rhs){
	Name = rhs.Name;
	healthPoints = rhs.healthPoints;
	playerSword = rhs.playerSword;
	playerShield = rhs.playerShield;
}

void Player::block(){
	int block = playerSword.getParry();
	int defend = playerShield.getShieldPoints();

	healthPoints += (block + (defend/2));

}

void Player::attacked(int attacked){
	healthPoints -= attacked; 
}

Sword Player::getSword(){
	return playerSword;
}

Shield Player::getShield(){
	return playerShield; 
}

string Player::getName(){
	return Name; 
}

int Player::getHealthPoints(){
	return healthPoints; 
}

void Player::addSword(Sword newSword){
	playerSword.setSwordName(newSword.getSwordName());
	playerSword.setDamage(newSword.getDamage());
	playerSword.setParry(newSword.getParry());

}

void Player::addShield(Shield newShield){
	playerShield.setShieldName(newShield.getShieldName());
	playerShield.setShieldPoints(newShield.getShieldPoints());
}

ostream& operator<<(ostream& output, Player& other){
	string name = other.getName();
	int health = other.getHealthPoints();
	output << name << ": " << health << endl; 

	return output;
}