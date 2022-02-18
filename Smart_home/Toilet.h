#pragma once

void air_temp_toil(float t); //Функция именения температуры воздуха в туалете
void air_hum_toil(float hum); //Функция изменения влажности воздуха в туалете
void conc_co2_toil(float co2); //Функция изменения концентрации CO2 в туалете
void brightness_toil(int bright); //Функция изменения яркости в туалете
void light_toil(); //Функция включения/выключения света в туалете
void vent_speed_toil(int speed); //Функция изменения скорости вентиляции в туалете
void menu_toil(); // Функция вызова меню параметров для туалета

struct toilet
{
	float air_temp; //Температура воздуха
	float air_hum; //Влажность воздуха
	float conc_co2; //Концентрация CO2
	int brightness; //Яркость света
	int light; //Включение/выключение света
	int vent_speed; //Скорость вентиляции
	int flag_flushdwn; //Флаг автоматического смыва
}toil;