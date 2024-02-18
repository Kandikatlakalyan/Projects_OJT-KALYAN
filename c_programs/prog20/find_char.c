int find_char(char x[],char ch)
{
	for(int i=0;x[i]!='\0';i++)
	{
		if(x[i]==ch)
			return i;
	}
	return -1;

}
