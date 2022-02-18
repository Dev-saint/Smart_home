#pragma once

void air_temp_wine(float t); //Функция именения температуры воздуха в винном погребе
void air_temp_wine_control(float t); //Функция контроля температуры в винном погребе
void air_hum_wine(float hum); //Функция изменения влажности воздуха в винном погребе
void conc_co2_wine(float co2); //Функция изменения концентрации CO2 в винном погребе
void brightness_wine(int bright); //Функция изменения яркости в винном погребе
void light_wine(); //Функция включения/выключения света в винном погребе
void vent_speed_wine(int speed); //Функция изменения скорости вентиляции в винном погребе
void menu_wine(); // Функция вызова меню параметров для винного погреба

struct wine_vault
{
	float air_temp; //Температура воздуха
	float air_hum; //Влажность воздуха
	float conc_co2; //Концентрация CO2
	int brightness; //Яркость света
	int light; //Включение/выключение света
	int vent_speed; //Скорость вентиляции
}wine;