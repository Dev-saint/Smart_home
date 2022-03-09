#include "Parametrs.h"

//Конструктор
parametrs::parametrs()
{
	air_temp = 0;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 0;
	vent_speed = 0;
}

//Функции получения данных из полей
float parametrs::Get_air_temp()
{
	return air_temp;
}

float parametrs::Get_air_hum()
{
	return air_hum;
}

float parametrs::Get_conc_co2()
{
	return conc_co2;
}

int parametrs::Get_brightness()
{
	return brightness;
}

int parametrs::Get_light()
{
	return light;
}

int parametrs::Get_vent_speed()
{
	return vent_speed;
}

//Функции инициализации полей
void parametrs::Set_air_temp(float temp)
{
	air_temp = temp;
}

void parametrs::Set_air_hum(float hum)
{
	air_hum = hum;
}

void parametrs::Set_conc_co2(float co2)
{
	conc_co2 = co2;
}

void parametrs::Set_brightness(int bright)
{
	brightness = bright;
}

void parametrs::Set_light(int l)
{
	light = l;
}

void parametrs::Set_vent_speed(int speed)
{
	vent_speed = speed;
}

//Деструктор
parametrs::~parametrs()
{
	;
}

//Инициализация класса параметры
void parametrs::Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	air_temp = temp;
	air_hum = hum;
	conc_co2 = co2;
	brightness = bright;
	light = l;
	vent_speed = speed;
}