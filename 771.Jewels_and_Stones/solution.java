public int numJewelsInStones(String J, String S) {
	int num = 0;
	Set setJ = new HashSet();
	for (char j: J.toCharArray()) setJ.add(j);
	for (char s: S.toCharArray()) if (setJ.contains(s)) 
		num++;
	return num;

}