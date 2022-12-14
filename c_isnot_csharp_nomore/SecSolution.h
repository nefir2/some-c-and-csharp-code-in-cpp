#pragma once

/// <summary>
/// класс представляющий персонажа.
/// </summary>
class Character {
public:
	/// <summary>
	/// конструктор персонажа.
	/// </summary>
	/// <param name="maxHealth">максимальное здоровье персонажа.</param>
	/// <param name="health">текущее здоровье персонажа.</param>
	/// <param name="damage">урон персонажа.</param>
	/// <param name="speed">скорость персонажа.</param>
	Character(int, int, int, int);
	/// <summary>
	/// деструктор объекта.
	/// </summary>
	~Character();
	/// <summary>
	/// добавление(вычитание) здоровья персонажу.
	/// </summary>
	/// <param name="health">сколько добавить здоровья персонажу.</param>
	void AddHealth(int);
	/// <summary>
	/// метод возвращающий значение текущего урона в секунду по формуле.
	/// </summary>
	/// <returns>текущий урон в секунду типа <see cref="int"/>.</returns>
	int CurrentDamagePerSecond();
	/// <summary>
	/// метод возвращающий двойной урон персонажа.
	/// </summary>
	/// <returns>двойной урон персонажа типа <see cref="int"/>.</returns>
	int DoubleDamage();
private:
	/// <summary>
	/// максимальное здоровье персонажа.
	/// </summary>
	int maxHealth;
	/// <summary>
	/// текущее здоровье персонажа.
	/// </summary>
	int health;
	/// <summary>
	/// урон персонажа.
	/// </summary>
	int damage;
	/// <summary>
	/// скорость персонажа.
	/// </summary>
	int speed;
};