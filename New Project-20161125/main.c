#include <stdio.h>


template <class T> int readMyBytes1(int address, byte data[], T& value, unsigned int dataSize)
{
	byte* p = (byte*)(void*)&value;
	unsigned int i;
	for (i = 0; i < dataSize; i++)
		*p++ = data[address++];
	return i;
}

int main()
{
    printf("Hello, World!\n");

    return 0;
}

