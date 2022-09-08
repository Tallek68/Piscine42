cat /etc/passwd | grep -v "#" | sed '1!n;d' | cut -d ':' -f1 | rev | sort -r | paste -d "," - | sed 's/,/, /g' | sed 's/$/, /' | tr -d '\n' | sed 's/, $/./'
