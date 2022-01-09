
dalla lawal(sahih a = 0){
	ara("jbti -> 16");
}

dalla tani(sahih b = 0){
	ara("jbti -> 12");
}

dalla talt(sahih c = 0){
	ara("jbti -> 18");
}


ara("ch7al  kat9ol atjib fl mti7an  ?");
sahih note = chkechm(sahih);

ara("khtar bin 1 | 2 | 3 : ");
sahih choix = chkechm(sahih);

ila(choix == 1){ 
	dir lawal(choix);
}ila(choix == 2){ 
	dir tani(choix);
}ila(choix == 3){ 
	dir talt(choix);
}