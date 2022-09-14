<<<<<<< HEAD
﻿#ifndef StringLength_H
	#define StringLength_H
	
int stringLength(char* arg)
=======
﻿int stringLength(char* arg)
>>>>>>> working
{
	int size = 0;
	while(*(arg+size) != '\0')
	{
		++size;
	}
	return size;
}
<<<<<<< HEAD
#endif
=======
>>>>>>> working
