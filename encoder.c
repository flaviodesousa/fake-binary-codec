main()
{
	int c,i;
	while ((c=getchar())>=0) {
		for(i=7;i>=0;i--) {
			putchar(((c>>i)&1)+48);
		}
	}
}