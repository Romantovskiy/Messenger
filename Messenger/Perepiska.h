#pragma once
#include "Message.h"
#include <iostream>
#include <string>

using namespace std;



class Perepiska
{
public:
	Perepiska();
	~Perepiska();
	Message* message[1000];
	int kolvoMessage;
	string Autor1;
	string  Autor2;

	void ShowPerepiska();
	void AddNewMassege(string Autor, string Text);
private:
	
};
