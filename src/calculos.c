/*
 * calculos.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Tukic
 */

#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "calculos.h"

/**
 * \brief calcula el precio con tarjeta de debito y hace el descuento
 * \param recibe el valor para realizar la operacion
 *
 * \return el precio  calculado con descuento
 *
 */
float PagarDebit(float priceRecibido)
{
	float priceDebit;
	float descuento;

	descuento = priceRecibido * 10 / 100;
	priceDebit = priceRecibido - descuento;

	return priceDebit;
}
/**
 * \brief calcula el precio con tarjeta de credito y calcula intereses
 * \param  recibe el valor para realizar la operacion
 *
 * \return el precio calculado con el interes
 *
 */

float PagarCredit(float priceRecibido)
{
	float priceCredit;
	float interes;

	interes = priceRecibido * 25 / 100;
	priceCredit = priceRecibido + interes;

	return priceCredit;
}
/**
 * \brief Calcula el precio en pesos y lo convierte en BTC
 * \param Recibe el numero para hacer la operacion
 *
 * \return el valor del resultado en bitcoin
 *
 */

float PagarBtc(float priceRecibido)
{
	float priceBtc;
	float unity;

	unity = 4606954.55;
	priceBtc = priceRecibido/ unity;

	return priceBtc;
}
/**
 * \brief calcula el precio unitario
 * \param recibe numeros para realizar la operacion
 *
 * \return el valor de la division
 *
 */

float PriceUnitario(float priceRecibido, float kmRecibido)
{
	float priceUnitario;

	if (kmRecibido!=0)
	{
		priceUnitario = priceRecibido/kmRecibido;
	}

	return priceUnitario;
}
/**
 * \brief calcula diferencia y hace una resta
 * \param recibe ambos valores para realizar la operacion
 *
 * \return el valor de la resta
 *
 */
float  DiffPrice(float firstPrice, float secondPrice )
{
	float diffPrice;

	if (firstPrice > secondPrice)
	{
		diffPrice = firstPrice -secondPrice;
	}
	else
	{
		diffPrice = secondPrice - firstPrice;
	}

	return diffPrice;
}

