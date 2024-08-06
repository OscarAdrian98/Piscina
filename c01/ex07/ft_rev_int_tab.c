void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;

    // Recorre hasta la mitad del array
    for (i = 0; i < size / 2; i++)
    {
        // Intercambia el elemento actual con su contraparte
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
    }
}