#pragma once
#include "myAccount.h"
#include <iostream>
#include <string>

using namespace std;

class Start
{
public:
	Start();
	~Start();
	myAccount* accounts[1000];
	int kolvoAccountov;
	void writeMessage(int i);
	void newChat(int i);
	void accountMenu(int i);
	void Vhod();
	void newAccount();
	void startMenu();
private:

};
