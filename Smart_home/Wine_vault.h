#pragma once
#include "Bathroom.h"

class Wine_vault : public Parametrs
{
private:
	//Parametrs param_wine;
public:
	//Конструктор
	Wine_vault();

	// Конструктор с одним параметром
	Wine_vault(float temp);

	//Конструктор с параметрами
	Wine_vault(float temp, float hum, float co2, int bright, int l, int speed);

	/*//Функции получения данных из полей
	float Get_air_temp_wine();
	float Get_air_hum_wine();
	float Get_conc_co2_wine();
	int Get_brightness_wine();
	int Get_light_wine();
	int Get_vent_speed_wine();

	//Функции инициализации полей
	void Set_air_temp_wine(float temp);
	void Set_air_hum_wine(float hum);
	void Set_conc_co2_wine(float co2);
	void Set_brightness_wine(int bright);
	void Set_light_wine(int l);
	void Set_vent_speed_wine(int speed);*/

	//Деструктор
	~Wine_vault();

	/*//Инициализация класса винный погреб
	void Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed);*/

	//Вывод параметров винного погреба на экран
	void DisplayWine();
};

void menu_wine(); // Функция вызова меню параметров для винного погреба