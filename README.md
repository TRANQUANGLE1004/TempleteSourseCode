# Templete sourse code for frdm kl46z board

This project write for linux environment.

This project has a cross-compiler arm in the environment folder.

## Getting Started

you must replace BOARD in Makefile equal the location of your board. 

Ex: BOARD=/media/pid4rv/FRDM-KL46Z

you add new header file in header folder.

you add new source file in source folder.

## Reference 

* [Linker script](https://github.com/0xc0170/kinetis_klxx_gcc) - Reference form kinetis_klxx_gcc project

* [sys_lib](https://github.com/0xc0170/kinetis_klxx_gcc) - Reference form kinetis_klxx_gcc project

## Run 

command make all to compile and copy file.bin to kl46z board.

command make clean to delete intermediate file.
