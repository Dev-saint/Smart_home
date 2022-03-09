#pragma once
//#include "Parametrs.h"
#include "Bathroom.h"

class wine_vault
{
private:
	parametrs param_wine;
public:
	//Конструктор
	wine_vault();

	//Функции получения данных из полей
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
	void Set_vent_speed_wine(int speed);

	//Деструктор
	~wine_vault();

	//Инициализация класса винный погреб
	void Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed);

	//Вывод параметров винного погреба на экран
	void OutWine();
};

/*void air_temp_wine(wine_vault wine1, float t); //Функция именения температуры воздуха в винном погребе
void air_hum_wine(wine_vault wine1,float hum); //Функция изменения влажности воздуха в винном погребе
void conc_co2_wine(wine_vault wine1,float co2); //Функция изменения концентрации CO2 в винном погребе
void brightness_wine(wine_vault wine1,int bright); //Функция изменения яркости в винном погребе
void light_wine(wine_vault wine1); //Функция включения/выключения света в винном погребе
void vent_speed_wine(wine_vault wine1,int speed); //Функция изменения скорости вентиляции в винном погребе*/
void menu_wine(); // Функция вызова меню параметров для винного погреба