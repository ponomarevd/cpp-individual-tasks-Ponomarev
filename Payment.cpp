#include "Payment.h"
#include <iostream>
using namespace std;

void Payment::SetStag(float value) {
	Stag_ = value;
}
void Payment::SetZP(float value) {
	ZP_ = value;
}
void Payment::SetNachSum(float value) {
	NachSum_ = value;
}
void Payment::SetUderSum(float value) {
	UderSumm_ = value;
}

void Payment::NachSum()
{
	SetNachSum(Oklad_ * DaysWorked_);
}

void Payment::UderSum()
{
	SetUderSum(NachSum_ * 0.01 + NachSum_ * 0.13);
}

void Payment::ZP()
{
	SetZP(DaysWorked_ * Oklad_ - (DaysWorked_ * Oklad_ * 0.13));
}

void Payment::Stag()
{
	SetStag(2009 - AcceptYear_);
}

void Payment::Init() {
	cout << "���: " && cin >> FIO_;
	cout << "�����: " && cin >> Oklad_;
	cout << "��� ����������� �� ������: " && cin >> AcceptYear_;
	cout << "������� ��������: " && cin >> AddProcent_;
	cout << "���������� �����: " && cin >> Tax_;
	cout << "���������� ������������ ���� � ������: " && cin >> DaysWorked_;
	cout << "���������� ������� ���� � ������: " && cin >> DaysAll_;
}
