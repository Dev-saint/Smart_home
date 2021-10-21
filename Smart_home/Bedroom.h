#pragma once

void air_temp_bed(int t); //Функция именения температуры воздуха в спальне
void air_hum_bed(); //Функция изменения влажности воздуха в спальне
void conc_co2_bed(); //Функция изменения концентрации CO2 в спальне
void brightness_bed(); //Функция изменения яркости в спальне
void light_bed(); //Функция включения/выключения света в спальне
void vent_speed_bed(); //Функция изменения скорости вентиляции в спальне

struct bedroom
{
	float air_temp; //Температура воздуха
	float air_hum; //Влажность воздуха
	float conc_co2; //Концентрация CO2
	int brightness; //Яркость света
	int vent_speed; //Скорость вентиляции
	int light; //Включение/выключение света
	int flag_sleep; //Флаг сна (определяет, наступило ли время для сна)
}bed;