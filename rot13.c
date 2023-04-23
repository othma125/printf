/**
 * rot13 - check the code
 * @s: input string
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char *inputs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *outputs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; inputs[j] != '\0'; j++)
		{
			if (s[i] == inputs[j])
			{
				s[i] = outputs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
