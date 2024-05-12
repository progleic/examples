
DIRS=01 02 03 04 05 06 07 08 09 10 11 12 13 14 15

all:
	for dir in $(DIRS); do \
		make -C $$dir; \
        done;
clean:
	for dir in $(DIRS); do \
		make -C $$dir clean; \
	done
