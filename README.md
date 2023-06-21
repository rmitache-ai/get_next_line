# 📜 get_next_line 
[![rmitache's 42 get_next_line Score](https://badge42.vercel.app/api/v2/clf7b1uxu00060fmjkjr0ywdm/project/3074042)](https://github.com/JaeSeoKim/badge42)


The C function get_next_line takes lines from a file or input stream and returns each line as a null-terminated string. Up until it meets a newline character or reaches the end of the file, it retrieves the following line.

![image](https://i.ibb.co/dkQBPyq/Frame-1-2.jpg)
## Usage
### Requirements
Because the function is written in C, it requires the gcc compiler and a few common C libraries to run.

**Simply include this header inside your file to access the function**
```c
#include "get_next_line.h"
```
**Then include the source files and the appropriate flag when compiling your code:**
```c
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```


## Testing
To test your code you can use this following git repository:
 * [Francinette](https://github.com/xicodomingues/francinette)



### Simple main function:
```c
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd;
    char *filename = "file.txt"; 
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }   
    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        printf("%s\n", line);
        free(line); 
    }   
    close(fd);
    return 0;
}

```

## Compile and run
```c
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
```
