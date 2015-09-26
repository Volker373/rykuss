#ifndef LOSER_H
#define LOSER_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class suckIt
{
	string no;
	int biscuit;

	cout<<"Tell me your favorite caller\n";
	getline(cin, no);
	stringstream ss (no);
	ss>>biscuit;

	if(ss.fail())
	{
		cout<<"You done fucked up\n";
	}

	cout<<"yes, i tricked you";

};




#endif