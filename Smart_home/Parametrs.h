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

	static parametrs* lastPar;  // Адрес последнего элемента списка
	parametrs* prev;             // На предыдущий элемент списка
	parametrs* next;             // На следующий элемент списка
public:
	//Конструктор
	parametrs();

	//Конструктор с одним параметром
	parametrs(float temp);

	//Конструктор с параметрами
	parametrs(float temp, float hum, float co2, int bright, int l, int speed);

	//Функции получения данных из полей
	float Get_air_temp();
	float Get_air_hum();
	float Get_conc_co2();
	int Get_brightness();
	int Get_light();
	int Get_vent_speed();

	//Функции получения данных из полей через ссылку
	void Get_air_temp_link(float& temp);
	void Get_air_hum_link(float& hum);
	void Get_conc_co2_link(float& co2);
	void Get_brightness_link(int& bright);
	void Get_light_link(int& l);
	void Get_vent_speed_link(int& speed);

	//Деструктор
	~parametrs();

	//Функции инициализации полей
	void Set_air_temp(float temp);
	void Set_air_hum(float hum);
	void Set_conc_co2(float co2);
	void Set_brightness(int bright);
	void Set_light(int l);
	void Set_vent_speed(int speed);

	// Перегрузка оператора '+' (parametrs + float)
	friend parametrs operator+(const parametrs& param, float temp);

	// Перегрузка префиксного оператора '++'
	parametrs& operator++();

	// Перегрузка постфиксного оператора '++'
	parametrs operator++ (int);

	//Инициализация класса параметры
	void Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed);

	// Добавление элемента в конец списка
	void Add(void);

	// Вывод на дисплей содержимого списка
	static void reprint(void);
	
	// Создание нового списка
	void NewList();

	//Вывод параметров на экран
	void Display();
};
