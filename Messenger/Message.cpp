#include "pch.h"
#include "Message.h"


string Message::getAutor()
{
	return Autor;
}

string Message::getText()
{
	return Text;
}

void Message::setAutor(string S)
{
	Autor = S;
}

void Message::setText(string S)
{
	Text = S;
}



Message::Message()
{
}

Message::~Message()
{
}