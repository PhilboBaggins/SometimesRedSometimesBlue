Making with a Makefile
======================

Building source code with make isn't enough, I want make to generate my source code too.

    MakingWithAMakefile$ ls
    Makefile   README.txt
    MakingWithAMakefile$ make
    echo "$C_SOURCE_CODE" > main.c
    gcc -Wall -O3 -o main main.c
    MakingWithAMakefile$ ls
    Makefile   README.txt main       main.c
    MakingWithAMakefile$ ./main
    Hello red world
    MakingWithAMakefile$ ./main
    Hello red world
    MakingWithAMakefile$ make -s clean && make -s && ./main
    Hello blue world



Thanks
------

Thankyou to the following web pages, and their authors, who's help allowed me to churn this makefile out in single-glass-of-scotch time ... I had a second glass to celebrate of course.

* https://askubuntu.com/questions/400888/how-can-i-get-the-bash-random-in-a-makefile
* http://www.tldp.org/LDP/abs/html/randomvar.html
* https://stackoverflow.com/questions/8281345/how-to-get-current-linux-process-id-pid-from-cmdline-in-shell-and-language-i/8281456#8281456
* https://stackoverflow.com/questions/649246/is-it-possible-to-create-a-multi-line-string-variable-in-a-makefile
