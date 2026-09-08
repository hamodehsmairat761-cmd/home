int	ft_isalpha(int alp)
{
	if ((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z'))
		return (1);
	return (0);
}
