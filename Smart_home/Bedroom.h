#pragma once
#include "Kitchen.h"

class bedroom
{
private:
	parametrs param_bed;
public:
	//Конструктор
	bedroom();

	//Функции получения данных из полей
	float Get_air_temp_bed();
	float Get_air_hum_bed();
	float Get_conc_co2_bed();
	int Get_brightness_bed();
	int Get_light_bed();
	int Get_vent_speed_bed();

	//Функции инициализации полей
	void Set_air_temp_bed(float temp);
	void Set_air_hum_bed(float hum);
	void Set_conc_co2_bed(float co2);
	void Set_brightness_bed(int bright);
	void Set_light_bed(int l);
	void Set_vent_speed_bed(int speed);

	//Деструктор
	~bedroom();

	//Инициализация класса спальня
	void Set_parametrs_bed(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	//Вывод параметров спальни на экран
	void OutBed();
};

void menu_bed(); // Функция вызова меню параметров для спальни