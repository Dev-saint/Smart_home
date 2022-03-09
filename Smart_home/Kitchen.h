#pragma once
//#include "Parametrs.h"
#include "Toilet.h"

class kitchen
{
private:
    int coffee; //Приготовление кофе после сна
    parametrs param_kitch;
public:
	//Конструктор
	kitchen();

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

	//Деструктор
	~kitchen();

	//Инициализация класса кухня
	void Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof);

	//Вывод параметров кухни на экран
	void OutKitch();

	void coffee_machine(); //Функция приготовления кофе
};

/*void air_temp_kitch(kitchen kitch1, float t); //Функция именения температуры воздуха на кухне
void air_hum_kitch(kitchen kitch1,float hum); //Функция изменения влажности воздуха на кухне
void conc_co2_kitch(kitchen kitch1,float co2); //Функция изменения концентрации CO2 на кухне
void brightness_kitch(kitchen kitch1,int bright); //Функция изменения яркости на кухне
void light_kitch(kitchen kitch1); //Функция включения/выключения света на кухне
void vent_speed_kitch(kitchen kitch1,int speed); //Функция изменения скорости вентиляции на кухне*/
void menu_kitch(); // Функция вызова меню параметров для кухни