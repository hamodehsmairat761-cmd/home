int	ft_isalnum(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
		return (1);
	else if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
