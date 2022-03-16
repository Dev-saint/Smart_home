#pragma once
#include "Toilet.h"

class kitchen
{
private:
    int coffee; //Приготовление кофе после сна
    parametrs* param_kitch = new parametrs();

public:
	//Конструктор
	kitchen();

	// Конструктор с одним параметром
	kitchen(float temp);

	//Конструктор с параметрами
	kitchen(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	// Конструктор копии
	kitchen(kitchen& Class);

	// Перегрузка функции присваивания
	kitchen& operator=(kitchen& Class);

	//Функции получения данных из полей
	float Get_air_temp_kitch();
	float Get_air_hum_kitch();
	float Get_conc_co2_kitch();
	int Get_brightness_kitch();
	int Get_light_kitch();
	int Get_vent_speed_kitch();
	int Get_coffee();

	//Функции инициализации полей
	void Set_air_temp_kitch(float temp);
	void Set_air_hum_kitch(float hum);
	void Set_conc_co2_kitch(float co2);
	void Set_brightness_kitch(int bright);
	void Set_light_kitch(int l);
	void Set_vent_speed_kitch(int speed);
	void Set_coffee(int cof);
	void Set_array(parametrs* param_arr);

	//Деструктор
	~kitchen();

	//Инициализация класса кухня
	void Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	//Вывод параметров кухни на экран
	void DisplayKitch();

	void coffee_machine(); //Функция приготовления кофе

	//Дружественная функция задания температур классов toilet, kitchen, bedroom, bathroom
	friend void temp_set_all(toilet& toil, kitchen& kitch, bedroom& bed, bathroom& bath, float temp);
};

void menu_kitch(); // Функция вызова меню параметров для кухни