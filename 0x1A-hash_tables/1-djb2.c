/**
 * hash_djb2 - Hash function, takes string and return it into hash number
 * @str: string a constant value cant be repeated in hash table
 * Return: djb2 number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int djb2;
	int y;

	djb2 = 5381;
	while ((y = *str++))
	{
		djb2 = ((djb2 << 5) + djb2) + y; /* djb2* 33 + y */
	}
	return (djb2);
}
