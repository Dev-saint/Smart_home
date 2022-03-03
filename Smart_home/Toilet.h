#pragma once
#include "Parametrs.h"

struct toilet
{
	parametrs param_toil; //Параметры туалета
};

void air_temp_toil(toilet toil1,float t); //Функция именения температуры воздуха в туалете
void air_hum_toil(toilet toil1,float hum); //Функция изменения влажности воздуха в туалете
void conc_co2_toil(toilet toil1,float co2); //Функция изменения концентрации CO2 в туалете
void brightness_toil(toilet toil1,int bright); //Функция изменения яркости в туалете
void light_toil(toilet toil1); //Функция включения/выключения света в туалете
void vent_speed_toil(toilet toil1,int speed); //Функция изменения скорости вентиляции в туалете
void menu_toil(); // Функция вызова меню параметров для туалета