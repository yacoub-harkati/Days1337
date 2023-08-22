void	*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char str[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce au on peut faire avec\t\n\tprint_memory\n\n\n\tlol\n";
	ft_print_memory(str, 87);
	return 0;
}

str[0] = '\0'