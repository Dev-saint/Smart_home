#pragma once
#include "Parametrs.h"

struct bedroom
{
	parametrs param_bed;
	int flag_sleep; //Флаг сна (определяет, наступило ли время для сна)
};

void air_temp_bed(bedroom bed1,float t); //Функция именения температуры воздуха в спальне
void air_hum_bed(bedroom bed1,float hum); //Функция изменения влажности воздуха в спальне
void conc_co2_bed(bedroom bed1,float co2); //Функция изменения концентрации CO2 в спальне
void brightness_bed(bedroom bed1,int bright); //Функция изменения яркости в спальне
void light_bed(bedroom bed1); //Функция включения/выключения света в спальне
void vent_speed_bed(bedroom bed1,int speed); //Функция изменения скорости вентиляции в спальне
void menu_bed(); // Функция вызова меню параметров для спальни