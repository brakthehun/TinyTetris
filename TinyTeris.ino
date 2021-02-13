boolean placeTile(boolean test,int pozx,int pozy){
  boolean flip=0;
  if(!field[0][pozx][pozy]&&!field[1][pozx][pozy]){
    if(field[!player][pozx+1][pozy]&&pozx<(fieldSizex-2)){  //right
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozx;
      while(!testz&&!solu&&(pos)<fieldSizex){
        pos++;
        length++;
        if(field[player][pos][pozy]){solu=1;}
        if(!field[!player][pos][pozy]&&!field[player][pos][pozy]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx+1+a][pozy]=1;
            field[!player][pozx+1+a][pozy]=0;
          }
        }
      }
    }
    if(field[!player][pozx+1][pozy+1]&&pozx<(fieldSizex-2)&&pozy<(fieldSizey-2)){  //right down
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozx;
      int pos2=pozy;
      while(!testz&&!solu&&(pos)<fieldSizex&&pos2<fieldSizey){
        pos++;
        pos2++;
        length++;
        if(field[player][pos][pos2]){solu=1;}
        if(!field[!player][pos][pos2]&&!field[player][pos][pos2]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx+1+a][pozy+1+a]=1;
            field[!player][pozx+1+a][pozy+1+a]=0;
          }
        }
      }
    }
    if(field[!player][pozx][pozy+1]&&pozy<(fieldSizey-2)){  //down
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozy;
      while(!testz&&!solu&&(pos)<fieldSizey){
        pos++;
        length++;
        if(field[player][pozx][pos]){solu=1;}
        if(!field[!player][pozx][pos]&&!field[player][pozx][pos]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx][pozy+1+a]=1;
            field[!player][pozx][pozy+1+a]=0;
          }
        }
      }
    }
    if(field[!player][pozx-1][pozy+1]&&pozx>1&&pozy<(fieldSizey-2)){  //down left
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozx;
      int pos2=pozy;
      while(!testz&&!solu&&(pos)>0&&pos2<fieldSizey){
        pos--;
        pos2++;
        length++;
        if(field[player][pos][pos2]){solu=1;}
        if(!field[!player][pos][pos2]&&!field[player][pos][pos2]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx-1-a][pozy+1+a]=1;
            field[!player][pozx-1-a][pozy+1+a]=0;
          }
        }
      }
    }
    if(field[!player][pozx-1][pozy]&&pozx>1){  //left
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozx;
      while(!testz&&!solu&&(pos)>0){
        pos--;
        length++;
        if(field[player][pos][pozy]){solu=1;}
        if(!field[!player][pos][pozy]&&!field[player][pos][pozy]){testz=1;}
      }
      if(solu){
        flip=1;
          if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx-1-a][pozy]=1;
            field[!player][pozx-1-a][pozy]=0;
          }
        }
      }
    }
    if(field[!player][pozx-1][pozy-1]&&pozx>1&&pozy>1){  //left up
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozx;
      int pos2=pozy;
      while(!testz&&!solu&&(pos)>0&&pos2>0){
        pos--;
        pos2--;
        length++;
        if(field[player][pos][pos2]){solu=1;}
        if(!field[!player][pos][pos2]&&!field[player][pos][pos2]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx-1-a][pozy-1-a]=1;
            field[!player][pozx-1-a][pozy-1-a]=0;
          }
        }
      }
    }
    if(field[!player][pozx][pozy-1]&&pozy>1){  //up
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozy;
      while(!testz&&!solu&&(pos)<fieldSizey){
        pos--;
        length++;
        if(field[player][pozx][pos]){solu=1;}
        if(!field[!player][pozx][pos]&&!field[player][pozx][pos]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx][pozy-1-a]=1;
            field[!player][pozx][pozy-1-a]=0;
          }
        }
      }
    }
    if(field[!player][pozx+1][pozy-1]&&pozx<(fieldSizex-2)&&pozy>1){  //up right
      boolean testz=0;
      boolean solu=0;
      int length=0;
      int pos=pozx;
      int pos2=pozy;
      while(!testz&&!solu&&(pos)<fieldSizex&&pos2>0){
        pos++;
        pos2--;
        length++;
        if(field[player][pos][pos2]){solu=1;}
        if(!field[!player][pos][pos2]&&!field[player][pos][pos2]){testz=1;}
      }
      if(solu){
        flip=1;
        if(!test){
          for(int a=0;a<length;a++){
            field[player][pozx+1+a][pozy-1-a]=1;
            field[!player][pozx+1+a][pozy-1-a]=0;
          }
        }
      }
    }

  }
  if(flip&&!test){
    field[player][pozx][pozy]=1;
    player=!player;
  }
  return flip;
}
