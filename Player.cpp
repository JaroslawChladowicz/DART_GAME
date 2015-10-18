#include<iostream>
#include<string>
#include"Player.h"
void Player::set_name(string name)
{
	this->name=name;
}

string Player::get_name()
{
	return this->name;
}

void Player::set_point(int point)
{
	this->point=point;
}

int Player::get_point()
{
	return this->point;
}

void Player::set_set(int set)
{
	this->set=set;
}

int Player::get_set()
{
	return this->set;
}

void Player::set_leg(int leg)
{
	this->leg=leg;
}

int Player::get_leg()
{
	return this->leg;
}
