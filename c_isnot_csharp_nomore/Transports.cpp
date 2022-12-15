#include "Transports.h"

Transport::Transport(string mark, string model) {
	this->mark = mark;
	this->model = model;
}

Transport::~Transport() { delete this; }

string Transport::get_mark() { return mark; }

void Transport::set_mark(string value) { mark = value; }

string Transport::get_model() { return model; }

void Transport::set_model(string value) { model = value; }

void Transport::Move() {
}

string Transport::ToString()
{
	string s = string();
	s.append("mark = ").append(mark).append(";\nmodel = ").append(model).append(";\n");
	return s;
}
