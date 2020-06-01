#ifndef _CAL_H_
#define _CAL_H_
#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int int_cmp(const void *p1, const void *p2);
void bubble(void *base, int count, int size, int(*cmp)(void*, void*));
void _swap(void *p1, void *p2, int szie);
#endif
