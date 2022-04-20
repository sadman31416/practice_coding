#include <iostream>
using namespace std;
int main()
{
	FILE *in,*out;
	char *fn1="image1.jpg";
	char *fn2="imagecopy.jpg";
	int x;
	in=fopen(fn1,"rb");
	if(in==NULL)
	{
		perror("Some thing is worng");
	}
	out=fopen(fn2,"wb");

	while(1)
	{
		x=fgetc(in);
	    if(x== EOF)
	    break;
	    fputc(x,out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
