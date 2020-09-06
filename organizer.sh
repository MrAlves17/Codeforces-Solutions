mkdir $(ls | sed 's/[A-Z].cpp//')
mapfile -t files < <(ls -1 *.cpp);
for i in "${!files[@]}"; do
	folders[i]=$(echo ${files[i]} | sed 's/.cpp//') 
	folders[i]=$(echo ${folders[i]} | sed 's/[a-z][0-9]//') 
	folders[i]=$(echo ${folders[i]} | sed 's/[A-Z][0-9]//') 
	folders[i]=$(echo ${folders[i]} | sed 's/[A-Z]//') 
	echo ${folders[i]}
done

for i in "${!files[@]}"; do
	mv ${files[i]} ${folders[i]}
done