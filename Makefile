all:
gcc -std=c task9.c -o task9

test:
 chmod +x task9

clean:
 $(RM) task9
