#pragma once
#include "Parametrs.h"

class toilet
{
private:
	parametrs param_toil; //Параметры туалета
public:
	//Конструктор
	toilet();

	//Функции получения данных из полей
	float Get_air_temp_toil();
	float Get_air_hum_toil();
	float Get_conc_co2_toil();
	int Get_brightness_toil();
	int Get_light_toil();
	int Get_vent_speed_toil();

	//Функции инициализации полей
	void Set_air_temp_toil(float temp);
	void Set_air_hum_toil(float hum);
	void Set_conc_co2_toil(float co2);
	void Set_brightness_toil(int bright);
	void Set_light_toil(int l);
	void Set_vent_speed_toil(int speed);

	//Деструктор
	~toilet();

	//Инициализация класса туалет
	void Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed);
	
	//Вывод параметров туалета на экран
	void OutToil();
};

/*void air_temp_toil(toilet toil1, float t); //Функция именения температуры воздуха в туалете
void air_hum_toil(toilet toil1,float hum); //Функция изменения влажности воздуха в туалете
void conc_co2_toil(toilet toil1,float co2); //Функция изменения концентрации CO2 в туалете
void brightness_toil(toilet toil1,int bright); //Функция изменения яркости в туалете
void light_toil(toilet toil1); //Функция включения/выключения света в туалете
void vent_speed_toil(toilet toil1,int speed); //Функция изменения скорости вентиляции в туалете*/
void menu_toil(); // Функция вызова меню параметров для туалета