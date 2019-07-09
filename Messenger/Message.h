#pragma once
#include <iostream>
#include <string>

using namespace std;


class Message
{
public:
	Message();
	~Message();
	string getAutor();
	string getText();


	void setAutor(string S);
	void setText(string S);
private:
	string Autor;
	string Text;
};
