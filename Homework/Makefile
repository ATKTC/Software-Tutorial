SRCS = homework-1.c IRSensor.c
OBJS = homework-1.o IRSensor.o

homework-1: $(OBJS)
	gcc -o homework-1 $(OBJS)

homework-1.o: homework-1.c
	gcc -c homework-1.c

IRSensor.o: IRSensor.c
	gcc -c IRSensor.c

clean:; /bin/rm homework-1 *.o

depend:; makedepend $(SRCS)

# C:\msys64\usr\bin\make.exe
