char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	int i;

	while (dest[destl] != '\0')
	{
		destl++;
	}
	while (src[srcl] != '\0')
	{
		srcl++;
	}
	for(i = 0; i < n; i++)
	{
		dest[destl + i] = src[i];
	}
	return (dest);
}