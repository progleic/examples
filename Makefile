
all:
	make -C 01
	make -C 02
	make -C 03
	make -C 04
clean:
	make -C 01 clean
	make -C 02 clean
	make -C 03 clean
	make -C 04 clean
