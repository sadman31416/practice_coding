#include <iostream>
using namespace std;
int main()
{
	FILE *in,*out;
	char *fn1="file location";//type your jpg file location here.
	char *fn2="imagecopy.jpg";//you will find this image in the folder in which codes are had saved.
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
