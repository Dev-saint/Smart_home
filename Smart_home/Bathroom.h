#pragma once
#include "Bedroom.h"

class bathroom
{
private:
    int flag_water; //Флаг набора воды
    parametrs param_bath;
public:
	//Конструктор
	bathroom();

	//Функции получения данных из полей
	float Get_air_temp_bath();
	float Get_air_hum_bath();
	float Get_conc_co2_bath();
	int Get_brightness_bath();
	int Get_light_bath();
	int Get_vent_speed_bath();
	int Get_flag_water();

	//Функции инициализации полей
	void Set_air_temp_bath(float temp);
	void Set_air_hum_bath(float hum);
	void Set_conc_co2_bath(float co2);
	void Set_brightness_bath(int bright);
	void Set_light_bath(int l);
	void Set_vent_speed_bath(int speed);
	void Set_flag_water(int water);

	//Деструктор
	~bathroom();

	//Инициализация класса ванная
	void Set_parametrs_bath(float temp, float hum, float co2, int bright, int l, int speed, int water);

	//Вывод параметров ванной на экран
	void OutBath();

	void water_bath(); //Функция набора воды в ванную

	//Дружественная функция задания температур классов toilet, kitchen, bedroom, bathroom
	friend void temp_set_all(toilet& toil, kitchen& kitch, bedroom& bed, bathroom& bath, float temp);
};

void menu_bath(); // Функция вызова меню параметров для ванной