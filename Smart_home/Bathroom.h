#pragma once
//#include "Parametrs.h"
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
};

/*void air_temp_bath(bathroom bath1, float t); //Функция именения температуры воздуха в ванной
void air_hum_bath(bathroom bath1,float hum); //Функция изменения влажности воздуха в ванной
void conc_co2_bath(bathroom bath1,float co2); //Функция изменения концентрации CO2 в ванной
void brightness_bath(bathroom bath1,int bright); //Функция изменения яркости в ванной
void light_bath(bathroom bath1); //Функция включения/выключения света в ванной
void vent_speed_bath(bathroom bath1,int speed); //Функция изменения скорости вентиляции в ванной*/
void menu_bath(); // Функция вызова меню параметров для ванной