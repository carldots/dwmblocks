//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */


  {"", "echo -n \" \" && curl -Ss 'https://wttr.in/halmstad?0&T&Q' | cut -c 16- | head -2 | xargs", 500, 0},
/*  {"", "df -h -P /dev/sda1 | awk '{print $4}' | awk 'NR==2' | sed 's/^/AUX: /'", 5, 0}, */
/*  {"", "df -h -P /dev/sda1 | awk '{print $4}' | awk 'NR==2' | sed 's/^/AUX: /'", 5, 0}, */
/*  {"", "df -h -P /dev/nvme1n1p2 | awk '{print $4}' | awk 'NR==2' | sed 's/^/ROOT: /'", 5, 0}, */
  {"", "df -h -P /dev/dm-0 | awk '{print $4}' | awk 'NR==2' | sed 's/^/ROOT: /'", 5, 0},
  {"", "echo -n \"MEM: \" && free -h --giga | awk '/^Mem/ {print $3}'", 1, 0},
  {"", "date", 1, 0},


};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
