CC := gcc

football.exe: football_main.c football.c 
	$(CC) $^ -o $@

temperature.exe: temperature.c temperature_main.c
	$(CC) $^ -o $@

