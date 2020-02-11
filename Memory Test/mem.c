#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {					     //C1:affects stack  C2:Allocated C3: stack
	int num;                                     //   affects stack     Allocated     stack
	int *ptr;                                    //   affects stack     Allocated     stack
	int **handle;                                //   affects stack     Allocated     stack

	num = 14;                                    //   affects stack     Stored        
	ptr = (int *)malloc(2 * sizeof(int));        //   affects heap      Allocated     heap
	handle = &ptr;                               //   affects stack     Stored        
	*ptr = num;                                  //   affects heap      Stored        
	ptr = &num;                                  //   affects heap      Stored        
	handle = (int **)malloc(1 * sizeof(int **)); //   affects heap      Allocated     heap
}

//C4:Yes, this means that there will be a memory leak once this program has
//been ran. You would need to free handle and ptr in order to alleviate this.
