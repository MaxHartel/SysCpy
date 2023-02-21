#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char** argv)
{
	int size, fd, fd2, fd3=0, sz, r;
	char *content; 
	(void)argc;

	//opens input file via system call, and assigns file pointer
    fd = open(argv[1], O_RDONLY); 
    if (fd ==-1)
    {
        // print which type of error have in a code
        printf("Error Number % d\n", errno); 
		return(1);              
    }

	//size of input file
	size = 10000;
	content = (char *) calloc(size, sizeof(char));

	//reads input file contents, and stores it in variable 'content'
	r = read(fd, content, size);
	size = r;

	printf("%s\n", content);

	//creates and opens new file
	fd2 = open(argv[2], O_RDWR | O_CREAT, 0644); 
    if (fd2 ==-1)
    {
		fd3 = open(argv[2], O_RDWR, 0644); 
        if (fd3 ==-1)
    	{
        // print which type of error have in a code
        printf("Error Number % d\n", errno);                     
    	}
		else
		{
		//writes content of specified file to new file
		sz = write(fd3, content, size);
		}                 

		// print program detail "Success or failure"
        perror("Program");    
    }
	else
	{
		//writes content of specified file to new file
		sz = write(fd2, content, size);
	}


	//Closes open files
	close(fd);
	close(fd2);
	close(fd3);

	return (0);
}
