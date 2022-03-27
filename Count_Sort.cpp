int Count_Sort(vector<int> array,int length){
  int zeroes,one,two,three,fours,fives,sixes,sevens,eights,nines;
  for(int i = 0 ; i <length ; i++){
    switch(array[i]) {
      case 1:
        one++;
      case 2:
        two++;
      case 3:
        three++;
      case 4:
        fours++;
      case 5:
        fives++;
      case 6:
        sixes++;
      case 7:
        sevens++;
      case 8:
        eights++;
      case 9:
        nines++;
      case 0:
        zeroes++;
    }
  }
  int array_final[10];
  array_final[0] = zeroes;
  array_final[1] = one;
  array_final[2] = two;
  array_final[3] = three;
  array_final[4] = fours;
  array_final[5] = fives;
  array_final[6] = sixes;
  array_final[7] = sevens;
  array_final[8] = eights;
  array_final[9] = nines;
  for(int j = 0 ; j<10 ; j++){
    if(j==0){
      continue;
    }else{
      array_final[j] = array_final[j-1]+array_final[j];
    }
  }
  int answer[length];
  
}
