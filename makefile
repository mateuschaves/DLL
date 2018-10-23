compile: exe.c
	gcc exe.c -o minha.exe minha.a

exe.c: out.o
	gcc -shared -o minha.dll out.o -Wl,--out-implib,minha.a

out.o: dll.c
	gcc -c -DBUILD_DLL dll.c -o out.o

clean:
	del *.o *.exe *.a

