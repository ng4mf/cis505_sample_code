Some tips for debugging with C/C++. 
This is not an exhaustive list and there are arguments for using different sets of parameters in some cases. 
This is a short, simple list, though, and is not meant to be exhaustive.

- Check the return values and errno values of system calls. ```#include<errno.h>``` and ```#include<string.h>``` are your friends. 
  You can use ```strerror(errno)``` to print useful error messages.

- Maximize debugging information by passing ```-ggdb3``` in your Makefile

- Enable all warnings. Warnings will still allow you to compile, but are good candidates to turn into bugs later. Add ```-Wall -Wextra -Wconversion``` to your Makefile rule.

- If you want to step through code in the debugger exactly line by line, you can disable all optimizations the compiler does by passing in ```-O0```. This makes things very slow but also follow exactly what is written in the code. By default, the compiler uses ```-O2```.

- The easiest one is address sanitizer so that you test as you go. In you Makefile rule for mysort, pass in "-fsanitize=address" and "-lasan". 
  Remember to disable this if you use valgrind.

- It can be super useful to be able to run gdb and valgrind together:
  In one terminal, run (track-origins adds more detail, but slows things down, remove it if you don't find it useful)

  ```valgrind --leak-check=full --track-origins=yes --vgdb=yes --vgdb-error=0 mysort <args go here>```
  In another terminal, run

  ```gdb mysort```
  Valgrind will give you a PID to input to gdb, so then inside gdb, type

  ```target remote | vgdb --pid=<valgrind-provided-pid>```

  Valgrind will trigger SIGTRAP and stop in gdb any time it detects an error. It will print the stack trace of why it is printing the error. You can then explore what might be causing the issue. Note that you cannot use "n" and "s" in this mode, but can use everything else. To move forward you must use "c".

---
Some useful commands in gdb:
- print thread info in gdb: info threads
- switch threads in gdb: thread <thread-id, get it from "info threads">
- add breakpoint: b <line number>
- breakpoint info: "i b"
- disable a breakpoint: "dis $breakpoint_number"
- enable a breakpoint: "en $breakpoint_number"
- print value: "p $var_name"
- next: "n"
- step: "s"
- continue: "c"
- recompile your program without exiting gdb: "make"
- run your program: "r <args>"
- restart your program while already having done at least one run in gdb with last set of args passed in: "r"
