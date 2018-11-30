#include "TreeStats.h"

TreeStats::TreeStats()
{
	this->mNumWater = 0;
	this->mNumFert = 0;
	this->mSize = 0;
	this->mHealth = 0;
	this->mStatus = "";
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

int TreeStats::getmHealth()
{
	return this->mHealth;
}

int TreeStats::getmSize()
{
	return this->mSize;
}

string TreeStats::getmStatus()
{
	return this->mStatus;
}

//setters

void TreeStats::setmNumWater(int newWater)
{
	this->mNumWater = newWater;
}

void TreeStats::setmNumFert(int newFert)
{
	this->mNumFert = newFert;
}

void TreeStats::setmHealth(int health)
{
	this->mHealth = health;
}

void TreeStats::setmSize(int newSize)
{
	this->mSize = newSize;
}

void TreeStats::setmStatus(string newStatus)
{
	this->mStatus = newStatus;
}

void TreeStats::setmStatus()
{
	if (mHealth == 1)
	{
		this->mStatus = "Unhealthy";
	}

	else if (mHealth == 2)
	{
		this->mStatus = "Nuetral";
	}
	
	else if (mHealth == 3)
	{
		this->mStatus = "Healthy";
	}

	else
	{
		this->mStatus = "";
	}
}


// member functions

void TreeStats::calcHealth(int water, int fert)
{
	int wStat = 0;
	int fStat = 0;
	int health = 0;
	
	if (fert >= 2 && fert <= 3)
		{
			fStat = 2;
		}
		else if (fert == 1 || fert == 4)
		{
			fStat = 1;
		}
		else
		{
			fStat = 0;
		}

	if (water >= 4 || water <= 6)
		{
			wStat = 2;
		}
		else if (water == 7 || water == 3)
		{
			wStat = 1;
		}
		else
		{
			wStat = 0;
		}
	health = wStat + fStat;

	switch (health)
	{
	case 4: mHealth = 3;
			break;
	case 3: mHealth = 3;
			break;
	case 2: mHealth = 2;
			break;
	case 1: mHealth = 2;
			break;
	case 0: mHealth = 1;
			break;
	}

	this->setmHealth(health);
}