head -n 1 text8.txt | awk '{for(i=1;i<=100 && i<=NF;i++) printf "%s ",$i; print ""}' > text8_100.txt
