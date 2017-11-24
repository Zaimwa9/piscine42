#1/bin/sh

cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -d ":" -f 1 | rev | sort -r | sed -n "$(echo "$FT_LINE1" | bc), $(echo "$FT_LINE2" | bc) p" | tr "\n" "," | sed 's/,/, /g' | sed 's/..$/./g' | tr -d '\n'
