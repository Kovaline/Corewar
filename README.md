# Corewar

Corewar is a group project which consists of two parts. First part is assembler and second one is virtual machine.
The assembler (the program) gets a file written in assembly language as argument and generate a champion that will be understood by the virtual machine.
Virtual machine loads some champions who will fight against each other with the support of "processes". The processes are executed sequentially within the same virtual machine and memory space.
The game ends when all the processes are dead. The winner is the last player reported to be “alive”.

## Compile and run

To run Corewar you have to:

Generate a .cor file for virtual machine using assembler:
```
make && ./asm champion/gladiator.s
```
Run virtual machine:
```
./corewar gladiator.cor
```
