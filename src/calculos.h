/*
 * calculos.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Tukic
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

float PagarDebit(float priceRecibido);
float PagarCredit(float priceRecibido);
float PagarBtc(float priceRecibido);
float PriceUnitario(float priceRecibido, float kmRecibido);
float DiffPrice(float firstPrice, float secondPrice);

#endif /* CALCULOS_H_ */
