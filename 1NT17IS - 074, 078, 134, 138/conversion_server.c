#include "conversion.h"
 
int * dtobin_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static int result;
	result = argp->n*argp->n;
	printf("Received Request : Squaring %d !\n",argp->n);
	printf("Converted !");
	printf("Sent Response : %d\n",result);

	return &result;
}
