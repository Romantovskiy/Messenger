#include "pch.h"
#include "myAccount.h"

/*
void myAccount::newChat()
{
	bool vhod;
	vhod = true;
	string friendsName;
	int i;
	cout << "� ��� �� ������ ������ ��������������?\n"; cin >> friendsName;
	for (i = 0; i < kolvoChat; i++)
	{
		if ((chats[i]->Autor1 == friendsName) || (chats[i]->Autor2 == friendsName))
		{
			cout << "���� ��� ��� ����������.\n";
			vhod = false;
			return;
		}
	}
	if (vhod)
	{
		Perepiska* newChat = new Perepiska;
		newChat->Autor1 = myName;
		newChat->Autor2 = friendsName;
		newChat->kolvoMessage = 0;
		chats[kolvoChat] = newChat;
		kolvoChat++;
	}
}
*/

void myAccount::ShowChats()
{
	int i;
	for (i = 0; i < kolvoChat; i++)
	{
		if (chats[i]->Autor2 == myName)
		{
			cout << chats[i]->Autor1 << "\n";
		}
		else
		{
			cout << chats[i]->Autor2 << "\n";
		}
	}
}

/*
void myAccount::writeMessage()
{
	bool vhod;
	vhod = true;
	int i;
	string friendsName;
	string Text;
	cout << "���� �� ������ ��������?\n"; cin >> friendsName;
	for (i = 0; i < kolvoChat; i++)
	{
		if ((chats[i]->Autor1 == friendsName) || (chats[i]->Autor2 == friendsName))
		{
			chats[i]->ShowPerepiska();
			cout << "������� ���� ���������:\n" << myName << ": "; cin >> Text;
			chats[i]->AddNewMassege(myName, Text);
			vhod = false;
			return;
		}
		if (vhod)
		{
			cout << "�� ��� �� ������ �������������� � " << friendsName << ". ��� ������ �������� ���.\n";
		}
	}
}
*/

/*
void myAccount::accountMenu()
{
	int vibor;
	cout << "�������� ���� �� ��������:\n1 - ���������� ������ ����� �����\n2 - �������� ����� ���������\n3 - ������� ����� ���\n";
	cin >> vibor;
	if (vibor == 1)
	{
		ShowChats();
	}
	if (vibor == 2)
	{
		writeMessage();
	}
	if (vibor == 3)
	{
		newChat();
	}
	cout << "�������� ���� �� ��������:\n1 - ���������� � ���� ��������\n2 - �����\n";
	cin >> vibor;
	if (vibor == 1)
	{
		accountMenu();
	}
	if (vibor == 2)
	{
		return;
	}
}
*/

string myAccount::getPassword()
{
	return password;
}

void myAccount::setPassword(string P)
{
	password = P;
}


myAccount::myAccount()
{
}

myAccount::~myAccount()
{
}