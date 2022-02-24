#pragma once
#include "Parametrs.h"

void air_temp_toil(float t); //Функция именения температуры воздуха в туалете
void air_hum_toil(float hum); //Функция изменения влажности воздуха в туалете
void conc_co2_toil(float co2); //Функция изменения концентрации CO2 в туалете
void brightness_toil(int bright); //Функция изменения яркости в туалете
void light_toil(); //Функция включения/выключения света в туалете
void vent_speed_toil(int speed); //Функция изменения скорости вентиляции в туалете
void menu_toil(); // Функция вызова меню параметров для туалета

struct toilet
{
	parametrs param_toil;
	int flag_flushdwn; //Флаг автоматического смыва
}toil;