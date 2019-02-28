cat /etc/passwd | grep -v "^#" | tail -n +2 | sed -n 'p;n' | cut -d ':' -f 1 | rev | tail -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/^/ /' | tr '\n' ',' | sed 's/^ //' | sed 's/,$/./' | tr -d '\n'
