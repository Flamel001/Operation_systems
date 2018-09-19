while ! ln file.txt file.lock
do
 sleep 1
done 
echo 0 > file.txt
i=1
until [[ "$i" -eq 1337 ]] 
do
 echo $(($p + 1)) >> file.txt
 let "i+=1"
 echo "$i"
done < file.txt

rm -f file.lock
