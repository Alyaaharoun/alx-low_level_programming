char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int l1;
int l2;
int i;
int j;
int l;
char *array;

if (s1 != NULL)
{
    i = 0;
    while (s1[i++] != '\0')
        l1++;
}
if (s2 != NULL)
{
    i = 0;
    while (s2[i++] != '\0')
        l2++;
}
if (n >= l2)
    n = l2;
l = l1 + n;
array = (char *)malloc(sizeof(char) * (l + 1));
if (array == NULL)
    return (NULL);
for (i = 0; i < l1; i++)
{
    array[i] = s1[i];
}
for (j = 0; j < n; j++, i++)
{
    array[i] = s2[j];
}
array[l] = '\0';
return (array);
}
