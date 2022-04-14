/*
 ============================================================================
 Name        : TrabajoPracticoNum1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "calculos.h"

int main(void) {


	setbuf(stdout, NULL);

		    int option;
			float kmVuelo;
			 char empresaElegida;
			float priceAerolineas;
			float priceLatam;
			float priceCardDebitAerolineas;
			float priceCardCreditAerolineas;
			float priceBtcAerolineas;
			float priceUnitAerolineas;
			float priceCardDebitLatam;
			float priceCardCreditLatam;
			float priceBtcLatam;
			float priceUnitLatam;
			float diffPrice;

			kmVuelo = -1;
			priceAerolineas = -1;
			priceLatam = -1;

			do
			{
				option = menu();

				switch(option)
					{
						case 1:
							kmVuelo = ingresoKm();
						break;

						case 2:
							empresaElegida = empresaVuelo();
							switch (empresaElegida)
							{
								case 'z':
									priceLatam = ingresoPriceLatam();
								break;
								default:
									priceAerolineas =  ingresoPriceAerolineas();
								break;
							}
						break;

						case 3:
							if (kmVuelo == -1 || priceLatam == -1 || priceAerolineas == -1)
							{
								printf("\n\n       ERROR. Faltan datos por completar!!!!   \n\n");
							}
							else
							{
								priceCardDebitAerolineas = PagarDebit(priceAerolineas);
								priceCardCreditAerolineas = PagarCredit(priceAerolineas);
								priceBtcAerolineas = PagarBtc(priceAerolineas);
								priceUnitAerolineas = PriceUnitario(priceAerolineas, kmVuelo);

								priceCardDebitLatam = PagarDebit(priceLatam);
								priceCardCreditLatam = PagarCredit(priceLatam);
								priceBtcLatam = PagarBtc(priceLatam);
								priceUnitLatam = PriceUnitario(priceLatam, kmVuelo);

								 diffPrice = DiffPrice(priceLatam, priceAerolineas);

								printf("\n\n  Los costos han sido calculados. Opcion 4 para obtenerlos  \n");
							}
						break;

						case 4:
							if (kmVuelo == -1 || priceLatam == -1 || priceAerolineas == -1)
							{
								printf("\n\n  ERROR. Faltan datos por completar       \n\n");
							}
							else
							{
								printf("\n\n KMs Ingresados: %.2f km"
										"\n\nPrecio Latam: $%.2f\n"
										"a)Precio con tarjeta de debito: $%.2f \n"
										"b)Precio con tarjeta de credito: $%.2f \n"
										"c)Precio pagando en bitcoins: %.6f BTC\n"
										"d)Precio unitario: $%.2f", kmVuelo, priceLatam, priceCardDebitLatam, priceCardCreditLatam,priceBtcLatam, priceUnitLatam);

								printf("\n\nPrecio Aerolineas: $%.2f\n"
										"a)Precio con tarjeta de debito: $%.2f \n"
										"b)Precio con tarjeta de credito: $%.2f \n"
										"c)Precio pagando en bitcoins: %.6f BTC\n"
										"d)Precio unitario: $%.2f \n"
										"\n\nLa diferencia de precio es : $%.2f \n\n", priceAerolineas, priceCardDebitAerolineas, priceCardCreditAerolineas, priceBtcAerolineas, priceUnitAerolineas,  diffPrice);
							}

						break;

						case 5:
							CargaForzada();
						break;


					}
			}while(option != 6);



}
