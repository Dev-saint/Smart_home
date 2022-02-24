#pragma once
#include "Parametrs.h"

struct wine_vault
{
	parametrs param_wine;
};

void air_temp_wine(wine_vault wine1,float t); //Функция именения температуры воздуха в винном погребе
void air_hum_wine(wine_vault wine1,float hum); //Функция изменения влажности воздуха в винном погребе
void conc_co2_wine(wine_vault wine1,float co2); //Функция изменения концентрации CO2 в винном погребе
void brightness_wine(wine_vault wine1,int bright); //Функция изменения яркости в винном погребе
void light_wine(wine_vault wine1); //Функция включения/выключения света в винном погребе
void vent_speed_wine(wine_vault wine1,int speed); //Функция изменения скорости вентиляции в винном погребе
void menu_wine(); // Функция вызова меню параметров для винного погреба