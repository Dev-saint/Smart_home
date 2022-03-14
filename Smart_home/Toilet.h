#pragma once
#include "Parametrs.h"

class kitchen;
class bedroom;
class bathroom;

class toilet
{
private:
	parametrs param_toil; //Параметры туалета
public:
	//Конструктор
	toilet();

	//Функции получения данных из полей
	float Get_air_temp_toil();
	float Get_air_hum_toil();
	float Get_conc_co2_toil();
	int Get_brightness_toil();
	int Get_light_toil();
	int Get_vent_speed_toil();

	// Функции получения данных из полей через указатель
	void Get_air_temp_toil_point(float* temp);
	void Get_air_hum_toil_point(float* hum);
	void Get_conc_co2_toil_point(float* co2);
	void Get_brightness_toil_point(int* bright);
	void Get_light_toil_point(int* l);
	void Get_vent_speed_toil_point(int* speed);

	//Функции инициализации полей
	void Set_air_temp_toil(float temp);
	void Set_air_hum_toil(float hum);
	void Set_conc_co2_toil(float co2);
	void Set_brightness_toil(int bright);
	void Set_light_toil(int l);
	void Set_vent_speed_toil(int speed);

	//Деструктор
	~toilet();

	//Инициализация класса туалет
	void Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed);
	
	//Вывод параметров туалета на экран
	void OutToil();

	//Дружественная функция задания температур классов toilet, kitchen, bedroom, bathroom
	friend void temp_set_all(toilet& toil, kitchen& kitch, bedroom& bed, bathroom& bath, float temp);
};

void menu_toil(); // Функция вызова меню параметров для туалета