#include "SecSolution.h"

Character::Character(int maxHealth, int health, int damage, int speed) {
	this->maxHealth = maxHealth;
	this->health = health;
	this->damage = damage;
	this->speed = speed;
}
Character::~Character() {
	delete this;
}
void Character::AddHealth(int health) {
	if (this->health + health > this->maxHealth) this->health = this->maxHealth;
	else this->health += health;
}
int Character::CurrentDamagePerSecond() {
	return this->damage * this->health / this->maxHealth;
}
int Character::DoubleDamage() {
	return this->damage * 2;
}