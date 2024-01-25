int main(int argc, char *argv[])
{
	int mul;
	mul = argv[1] * argv[2];

if (argc == 3)
{
	printf("%d\n", mul);
}
else if (argc != 3)
{
	printf("Error\n");
	return (1);
}
return (0);
}