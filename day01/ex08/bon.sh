ldapsearch -Q "cn=*bon*" "cn" | sed -n "/cn/p" | grep -o "BON" | wc -l | tr -d " \t"
