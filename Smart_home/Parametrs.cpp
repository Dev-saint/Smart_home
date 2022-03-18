#include "Parametrs.h"

/*// �������� ����� �� ���������� ��� �����������
bool Parametrs::IsRightTemp(float temp)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (temp < -20 || temp > 40)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ���������
bool Parametrs::IsRightHum(float hum)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (hum < 0 || hum > 100)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ������������ CO2
bool Parametrs::IsRightCO2(float co2)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (co2 < 0 || co2 > 50)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ������� �����
bool Parametrs::IsRightBright(int bright)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (bright < 0 || bright > 100)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ������ �����
bool Parametrs::IsRightLight(int l)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (l < 0 || l > 1)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� �������� ����������
bool Parametrs::IsRightSpeed(int speed)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (speed < 0 || speed > 100)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}*/

//�����������
Parametrs::Parametrs()
{
	air_temp = 0;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 2;
	vent_speed = 0;
}

//����������� � ����� ����������
Parametrs::Parametrs(float temp)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 2;
	vent_speed = 0;
}

//����������� � �����������
Parametrs::Parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
	//if (IsRightHum(hum))
	air_hum = hum;
	//if (IsRightCO2(co2))
	conc_co2 = co2;
	//if (IsRightBright(bright))
	brightness = bright;
	//if (IsRightLight(l))
	light = l;
	//if (IsRightSpeed(speed))
	vent_speed = speed;
}

// ��������� ����������� �� 5 ��������
float Parametrs::Temp_up()
{
	air_temp += 5;
	cout << "���������� �� 5 ��������" << endl;
	return air_temp;
}

// �������� ���������� �����������, �������������� � �������������
void Parametrs::Temp_check()
{
	float t;
	t = Temp_up();
	cout << "����������� ����������. ������� �����������: " << air_temp << endl;
}

//������� ��������� ������ �� �����
float Parametrs::Get_air_temp()
{
	return this->air_temp;
}

float Parametrs::Get_air_hum()
{
	return this->air_hum;
}

float Parametrs::Get_conc_co2()
{
	return this->conc_co2;
}

int Parametrs::Get_brightness()
{
	return this->brightness;
}

int Parametrs::Get_light()
{
	return this->light;
}

int Parametrs::Get_vent_speed()
{
	return this->vent_speed;
}

//������� ��������� ������ �� ����� ����� ������
void Parametrs::Get_air_temp_link(float& temp)
{
	temp = this->air_temp;
}

void Parametrs::Get_air_hum_link(float& hum)
{
	hum = this->air_hum;
}

void Parametrs::Get_conc_co2_link(float& co2)
{
	co2 = this->conc_co2;
}

void Parametrs::Get_brightness_link(int& bright)
{
	bright = this->brightness;
}

void Parametrs::Get_light_link(int& l)
{
	l = this->light;
}

void Parametrs::Get_vent_speed_link(int& speed)
{
	speed = this->vent_speed;
}

//������� ������������� �����
void Parametrs::Set_air_temp(float temp)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
}

void Parametrs::Set_air_hum(float hum)
{
	//if (IsRightHum(hum))
	air_hum = hum;
}

void Parametrs::Set_conc_co2(float co2)
{
	//if (IsRightCO2(co2))
	conc_co2 = co2;
}

void Parametrs::Set_brightness(int bright)
{
	//if (IsRightBright(bright))
	brightness = bright;
}

void Parametrs::Set_light(int l)
{
	//if (IsRightLight(l))
	light = l;
}

void Parametrs::Set_vent_speed(int speed)
{
	//if (IsRightSpeed(speed))
	vent_speed = speed;
}

// ���� ����������
void Parametrs::Inp()
{
	cout << "������� ����������� �������: ";
	cin >> air_temp;
	cout << "������� ��������� �������: ";
	cin >> air_hum;
	cout << "������� ������������ CO2: ";
	cin >> conc_co2;
	cout << "������� ������� �����: ";
	cin >> brightness;
	cout << "������� ���� �����: ";
	cin >> light;
	cout << "������� �������� ����������: ";
	cin >> vent_speed;
}

//����������
Parametrs::~Parametrs()
{
	;
}

//������������� ������ ���������
void Parametrs::Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
	//if (IsRightHum(hum))
	air_hum = hum;
	//if (IsRightCO2(co2))
	conc_co2 = co2;
	//if (IsRightBright(bright))
	brightness = bright;
	//if (IsRightLight(l))
	light = l;
	//if (IsRightSpeed(speed))
	vent_speed = speed;
}

/*// �������� ������ ������
void Parametrs::NewList()
{
	lastPar = NULL;
}


// ���������� �������� � ����� ������
void Parametrs::Add(void)
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

// ����� �� ������� ����������� ������
void Parametrs::reprint(void)
{
	Parametrs* uk;   // ��������������� ���������
	uk = lastPar;
	if (uk == NULL)
	{
		cout << "������ ����!";
		return;
	}
	else
		cout << "\n���������� ������:\n";

	// ���� ������ � �������� ������� �������� ��������� ������:
	while (uk != NULL)
	{
		cout << uk->air_temp << '\t';
		uk = uk->prev;
	}

	cout << "\n" << endl;
}*/

// ���������� ��������� '+' (Parametrs + float)
/*Parametrs operator+(const Parametrs& param, float temp)
{
	if (param.air_temp + temp > 40)
		return param;
	else
	{
		Parametrs tmp;
		tmp = param;
		tmp.Set_air_temp(param.air_temp + temp);
		return tmp;
	}
}*/

// ���������� ����������� ��������� '++'
Parametrs& Parametrs::operator++()
{
	air_temp += 1;
	return *this;
}

// ���������� ������������ ��������� '++'
/*Parametrs Parametrs::operator++ (int)
{
	Parametrs p1 = *this;
	++* this;
	return p1;
}*/

//����� ���������� �� �����
void Parametrs::Display()
{
	cout << endl << "���������� �������: " << air_temp << " ��" << endl;
	cout << "��������� �������: " << air_hum << " %" << endl;
	cout << "������������ CO2: " << conc_co2 << " %" << endl;
	cout << "������� �����: " << brightness << " %" << endl;
	cout << "������ �����: " << light << endl;
	cout << "�������� ����������: " << vent_speed << " %" << endl;
}