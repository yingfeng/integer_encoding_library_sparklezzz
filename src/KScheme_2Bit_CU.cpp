/*
 * KScheme_2Bit_CU.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#include "KScheme_2Bit_CU.hpp"
using namespace paradise::index;

int KScheme_2Bit_CU::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int KScheme_2Bit_CU::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int KScheme_2Bit_CU::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int KScheme_2Bit_CU::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int KScheme_2Bit_CU::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int KScheme_2Bit_CU::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* KScheme_2Bit_CU::clone() {
	Compressor* pNewComp = new KScheme_2Bit_CU(*this);
	return pNewComp;
}


