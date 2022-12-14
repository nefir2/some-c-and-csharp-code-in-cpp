#pragma once

/// <summary>
/// ����� �������������� ���������.
/// </summary>
class Character {
public:
	/// <summary>
	/// ����������� ���������.
	/// </summary>
	/// <param name="maxHealth">������������ �������� ���������.</param>
	/// <param name="health">������� �������� ���������.</param>
	/// <param name="damage">���� ���������.</param>
	/// <param name="speed">�������� ���������.</param>
	Character(int, int, int, int);
	/// <summary>
	/// ���������� �������.
	/// </summary>
	~Character();
	/// <summary>
	/// ����������(���������) �������� ���������.
	/// </summary>
	/// <param name="health">������� �������� �������� ���������.</param>
	void AddHealth(int);
	/// <summary>
	/// ����� ������������ �������� �������� ����� � ������� �� �������.
	/// </summary>
	/// <returns>������� ���� � ������� ���� <see cref="int"/>.</returns>
	int CurrentDamagePerSecond();
	/// <summary>
	/// ����� ������������ ������� ���� ���������.
	/// </summary>
	/// <returns>������� ���� ��������� ���� <see cref="int"/>.</returns>
	int DoubleDamage();
private:
	/// <summary>
	/// ������������ �������� ���������.
	/// </summary>
	int maxHealth;
	/// <summary>
	/// ������� �������� ���������.
	/// </summary>
	int health;
	/// <summary>
	/// ���� ���������.
	/// </summary>
	int damage;
	/// <summary>
	/// �������� ���������.
	/// </summary>
	int speed;
};