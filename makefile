compile: exe.c
	gcc exe.c -o analytical_geometry.exe analytical_geometry.a

exe.c: out.o
	gcc -shared -o analytical_geometry.dll out.o -Wl,--out-implib,analytical_geometry.a

out.o: dll.c
	gcc -c -DBUILD_DLL dll.c -o out.o

clean:
	del *.o *.exe *.a