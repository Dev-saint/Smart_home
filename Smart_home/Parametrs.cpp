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
	return this->air_temp;
}

float parametrs::Get_air_hum()
{
	return this->air_hum;
}

float parametrs::Get_conc_co2()
{
	return this->conc_co2;
}

int parametrs::Get_brightness()
{
	return this->brightness;
}

int parametrs::Get_light()
{
	return this->light;
}

int parametrs::Get_vent_speed()
{
	return this->vent_speed;
}

//Функции получения данных из полей через ссылку
void parametrs::Get_air_temp_link(float& temp)
{
	temp = this->air_temp;
}

void parametrs::Get_air_hum_link(float& hum)
{
	hum = this->air_hum;
}

void parametrs::Get_conc_co2_link(float& co2)
{
	co2 = this->conc_co2;
}

void parametrs::Get_brightness_link(int& bright)
{
	bright = this->brightness;
}

void parametrs::Get_light_link(int& l)
{
	l = this->light;
}

void parametrs::Get_vent_speed_link(int& speed)
{
	speed = this->vent_speed;
}

//Функции инициализации полей
void parametrs::Set_air_temp(float temp)
{
	this->air_temp = temp;
}

void parametrs::Set_air_hum(float hum)
{
	this->air_hum = hum;
}

void parametrs::Set_conc_co2(float co2)
{
	this->conc_co2 = co2;
}

void parametrs::Set_brightness(int bright)
{
	this->brightness = bright;
}

void parametrs::Set_light(int l)
{
	this->light = l;
}

void parametrs::Set_vent_speed(int speed)
{
	this->vent_speed = speed;
}

//Деструктор
parametrs::~parametrs()
{
	;
}

//Инициализация класса параметры
void parametrs::Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	this->air_temp = temp;
	this->air_hum = hum;
	this->conc_co2 = co2;
	this->brightness = bright;
	this->light = l;
	this->vent_speed = speed;
}

// Создание нового списка
void parametrs::NewList()
{
	lastPar = NULL;
}


// Добавление элемента в конец списка
void parametrs::Add(void)
{
	if (lastPar == NULL)
		this->prev = NULL;
	else
	{
		lastPar->next = this;
		prev = lastPar;
	}
	lastPar = this;
	this->next = NULL;
}

// Вывод на дисплей содержимого списка
void parametrs::reprint(void)
{
	parametrs* uk;   // Вспомогательный указатель
	uk = lastPar;
	if (uk == NULL)
	{
		cout << "Список пуст!";
		return;
	}
	else
		cout << "\nСодержимое списка:\n";

	// Цикл печати в обратном порядке значений элементов списка:
	while (uk != NULL)
	{
		cout << uk->air_temp << '\t';
		uk = uk->prev;
	}

	cout << "\n" << endl;
}

// Перегрузка оператора '+' (parametrs + float)
parametrs operator+(const parametrs& param, float temp)
{
	if (param.air_temp + temp > 40)
		return param;
	else
	{
		parametrs tmp;
		tmp = param;
		tmp.Set_air_temp(param.air_temp + temp);
		return tmp;
	}
}

// Перегрузка префиксного оператора '++'
parametrs& parametrs::operator++()
{
	air_temp += 1;
	return *this;
}

// Перегрузка постфиксного оператора '++'
parametrs parametrs::operator++ (int)
{
	parametrs p1 = *this;
	++* this;
	return p1;
}