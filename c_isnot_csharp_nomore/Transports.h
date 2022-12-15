#pragma once
#include <string>
using std::string;

class Transport
{
public:
	Transport(string mark, string model);
	~Transport();
	string get_mark();
	void set_mark(string value);
	string get_model();
	void set_model(string value);
	virtual void Move();
	virtual string ToString();
private:
	string mark;
	string model;
};