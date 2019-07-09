#pragma once
#include "Perepiska.h"
#include <iostream>
#include <string>

using namespace std;



class myAccount
{
public:
	myAccount();
	~myAccount();
	Perepiska* chats[1000];
	string myName;
	int kolvoChat;

//	void accountMenu();
	void ShowChats();
//	void newChat();
//	void writeMessage();
	string getPassword();
	void setPassword(string P);
private:
	string password;
};

