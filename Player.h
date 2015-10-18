#ifndef _PLAYERPLAYER
#define _PLAYERPLAYER
#include<string>
#include<iostream>
using namespace std;
class Player
{
private:
	int point;
	int leg;
	int set;
	string name;

public:
	void set_name(string name);
	string get_name();
	void set_set(int set);
	int get_set();
	void set_point(int point);
	int get_point();
	void set_leg(int leg);
	int get_leg();


};
#endif
