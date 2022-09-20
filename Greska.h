#pragma once
#include <iostream>
#include <exception>
using namespace std;
class GNemaTekuci:public exception
{
	const char* what()const override {
		return "Greska:Nema tekuceg elementa";
	}
};

