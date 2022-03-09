#pragma once
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>

using namespace std;

class parametrs
{
private:
	float air_temp; //Температура воздуха
	float air_hum; //Влажность воздуха
	float conc_co2; //Концентрация CO2
	int brightness; //Яркость света
	int light; //Включение/выключение света
	int vent_speed; //Скорость вентиляции
public:
	//Конструктор
	parametrs();

	//Функции получения данных из полей
	float Get_air_temp();
	float Get_air_hum();
	float Get_conc_co2();
	int Get_brightness();
	int Get_light();
	int Get_vent_speed();

	//Деструктор
	~parametrs();

	//Функции инициализации полей
	void Set_air_temp(float temp);
	void Set_air_hum(float hum);
	void Set_conc_co2(float co2);
	void Set_brightness(int bright);
	void Set_light(int l);
	void Set_vent_speed(int speed);

	//Инициализация класса параметры
	void Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed);
};