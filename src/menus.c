/*
 * menus.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Tukic
 */

#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "calculos.h"

/**
 * \brief realiza la funcion menu para el usuario
 * \param Recibe Void
 *
 * \return la opcion que escogio el usuario del menu
 *
 */


int menu()
{
	int option;

	printf("\n\n1- Ingresar Kilometros del vuelo \n"
			"2- Ingresar precios del vuelo \n"
			"3- Calcular todos los costos \n"
			"4- Informar resultados \n"
			"5- Carga forzada de datos \n"
			"6- Salir \n"
			"Elija una opcion: ");
	scanf("%d", &option);

	while(option < 1 || option > 6)
	{
		printf(	"1- Ingresar Kilometros del vuelo \n"
				"2- Ingresar precios del vuelo \n"
				"3- Calcular todos los costos \n"
				"4- Informar resultados \n"
				"5- Carga forzada de datos \n"
				"6- Salir \n"
				"ERROR, Elija una opcion:");
		scanf("%d", &option);
	}

	return option;
}
/**
 * \brief funcion para el ingreso de los KM
 * \param Recibe Void
 *
 * \return los km ingresados por el usuario
 *
 */
float ingresoKm()
{
	float km;

	printf("\n\nIngrese los kilometros del vuelo: ");
	scanf("%f", &km);
	while (km < 0)
	{
		printf("\n\nERROR.Ingrese los kilometros del vuelo: ");
		scanf("%f", &km);
	}

	return km;
}
/**
 * \brief la empresa elegida por el usuario ( AEROLINEAS O LATAM)
 * \param Recibe void
 *
 * \return la empresa que haya escogido el usuario ( z=latam | y=aerolineas)
 *
 */
char empresaVuelo()
{
	char empresaElegida;
	printf("\n\nLATAM -> z \n"
			"Aerolineas -> y \n"
			"\nIngrese la aerolinea con la que desea viajar:");
	fflush(stdin);
	scanf("%c", &empresaElegida);
	while (empresaElegida != 'z' && empresaElegida != 'y')
	{
		printf("\n\nLATAM -> z \n"
				"Aerolineas -> y \n"
				"\nERROR.Ingrese la aerolinea con la que desea viajar:");
		fflush(stdin);
		scanf("%c", &empresaElegida);
	}

	return empresaElegida;
}

/**
 * \brief calcula la carga de datos para la empresa AEROLINEAS
 * \param recibe void
 *
 * \return el precio que se ingreso sobre la empresa
 *
 */

float ingresoPriceAerolineas()
{
	float priceAerolineas;

	printf("\n\nIngrese el precio de la empresa aerolineas: ");
	scanf("%f", &priceAerolineas);
	while(priceAerolineas < 0)
	{
		printf("\n\nERROR.Ingrese el precio de la empresa aerolineas: ");
		scanf("%f", &priceAerolineas);
	}

	return priceAerolineas;
}
/**
 * \brief calcula la carga de datos para la empresa LATAM
 * \param recibe void
 *
 * \return el precio que se ingreso sobre la empresa
 *
 */
float ingresoPriceLatam()
{
	float priceLatam;

	printf("\n\nIngrese el precio de la empresa Latam: ");
	scanf("%f", &priceLatam);
	while(priceLatam < 0)
	{
		printf("\n\nERROR.Ingrese el precio de la empresa Latam: ");
		scanf("%f", &priceLatam);
	}

	return priceLatam;
}
/**
 * \brief carga forzada con datos ya hardcodeados ( KM, AEROLINEAS, LATAM)
 * \param recibe void
 *
 * \return void
 *
 */
void CargaForzada()
{
	float km;
	float priceLatam;
	float priceAerolineas;
	float diffPrice;
	km = 7090;
	priceLatam = 159339;
	priceAerolineas= 162965;
	printf("\n\nKMs Ingresados: %.2f km"
			"\n\nPrecio Latam: $%.2f\n"
			"a)Precio con tarjeta de debito: $%.2f \n"
			"b)Precio con tarjeta de credito: $%.2f \n"
			"c)Precio pagando en bitcoins: %.6f BTC\n"
			"d)Precio unitario: $%.2f", km, priceLatam, PagarDebit(priceLatam), PagarCredit(priceLatam), PagarBtc(priceLatam), PriceUnitario(priceLatam, km));

	printf("\n\nPrecio Aerolineas: $%.2f\n"
			"a)Precio con tarjeta de debito: $%.2f \n"
			"b)Precio con tarjeta de credito: $%.2f \n"
			"c)Precio pagando en bitcoins: %.6f BTC\n"
			"d)Precio unitario: $%.2f \n"
			"\n\nLa diferencia de precio es: $%.2f \n\n", priceAerolineas, PagarDebit(priceAerolineas), PagarCredit(priceAerolineas), PagarBtc(priceAerolineas), PriceUnitario(priceAerolineas, km), diffPrice = DiffPrice(priceLatam, priceAerolineas));
}

