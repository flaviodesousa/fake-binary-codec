main(){int c,b=0,m=8;while((b<<=1,c=getchar())>=0){b|=c&1;if(!--m)putchar(b&127),m=8;}}
