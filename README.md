# myWc

An easy implementation fo a wordcount (wc)

- -c counts the characters
- -w counts the words


## Compile & run
compile using `clang mywc.c -o mywc` or `gcc mywc.c -o mywc`

Run `./mywc -c`, then type some characters, send EOF to the console using `Ctrl+d` or 

```cat lorem_ipsum.txt | ./mywc -c```.