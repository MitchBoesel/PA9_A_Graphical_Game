#include "TreeStats.h"

TreeStats::TreeStats()
{
	this->mNumWater = 0;
	this->mNumFert = 0;
//	this->mHealth = 0;
}

//getters

int TreeStats::getmNumWater()
{
	return this->mNumWater;
}

int TreeStats::getmNumFert()
{
	return this->mNumFert;
}

//int TreeStats::getmHealth()
//{
//	return this->mHealth;
//}

//setters

void TreeStats::setmNumWater(int newWater)
{
	this->mNumWater = newWater;
}

void TreeStats::setmNumFert(int newFert)
{
	this->mNumFert = newFert;
}

//void TreeStats::setmHealth(int health)
//{
//	this->mHealth = health;
//}


// member functions

int TreeStats::calcHealth()
{
	int health = 0;
	int condition = 0;

	//determining health of watering
	if (mNumWater <= 1 || mNumWater >= 8)	//unhealthy 
	{
		health--;
	}
	else if (mNumWater >= 2 && mNumWater <= 5)	//healthy
	{
		health++;
	}
	else	//nuetral
	{
		health = health;
	}

	//determining health of fertilization
	if (mNumFert == 0 || mNumFert == 4)		// nuetral
	{
		health = health;
	}
	else if (mNumFert >= 1 && mNumFert <= 3)	//healthy
	{
		health++;
		
	}
	else	//unhealthy
	{
		health--;
	}

	//determining condition
	if (health >= 1)	//healthy
	{
		condition = 1;
	}
	else if (health == 0)	//nuetral
	{
		condition = 2;
	}
	else if (health < 0)	//unhealthy
	{
		condition = 3;
	}

	this->resetW();
	this->resetF();

	return condition;
}

void TreeStats::incWater()
{
	mNumWater++;
}

void TreeStats::incFert()
{
	mNumFert++;
}

void TreeStats::resetW()
{
	this->mNumWater = 0;
}

void TreeStats::resetF()
{
	this->mNumFert = 0;
}