if (flip) {
  if (map) miniDeco();
  map = !map;
}
if (map) {
  PA_LoadBackground(1, 2, &TopTransp);
  PA_ClearTextBg(1);
  u16 AppliesToCustom = 0;
  int x, y = 0;
  scale = 50 * 10;  // Percent * 10
  padding = border + 15;
  int spritesize;
  int i, j;
  int color;  // 0 = Background; 1 = White; 2 = Red; 3 = Green; 4 = Blue;

  AppliesToCustom = playerID;
  x = Get_X(AppliesToCustom);
  y = Get_Y(AppliesToCustom);
  redraw(x, y, scale, padding, 16);

  for (AppliesToCustom = 0; AppliesToCustom < 256; AppliesToCustom++) {
    if (Instances[AppliesToCustom].InUse) {
      x = Get_X(AppliesToCustom);
      y = Get_Y(AppliesToCustom);
      if (y > 200) continue;
      if (x > 300) continue;
      x *= scale;
      y *= scale;
      x /= 1000;
      y /= 1000;
      x += padding;
      y += padding;
      // PA_Print(0, "%d|",x);
      color = 0;
      spritesize = 8;
      switch (Instances[AppliesToCustom].EName) {
        case (Block):
          color = 1;
          // spritesize = 6;
          break;
        case (Pickup):
          color = 3;
          spritesize = 4;
          break;
        case (Baddie):
          color = 2;
          break;
        case (Player):
          playerID = AppliesToCustom;
          color = 4;
          y += 2;
          spritesize = 6;
          break;
        case (Next_Level):
          color = 5;
          break;
        default:
          continue;
      }
      if (color != 0) {
        for (i = 0; i < spritesize; i++) {
          for (j = 0; j < spritesize; j++) {
            PA_Put8bitPixel(1, x + i, y + j, color);
          }
        }
      }
    }
  }
  miniDeco();
} else {
  PA_LoadBackground(1, 2, &TopNoMessage);
  int i;
  int skip = 0;
  for (i = 0; i < 16; i++)
    Draw_Text(1, 3, i, "                                    ");
  lineNumbers(2);
  if (!map) {
    for (i = 0; i < todolist.size; i++) {
      if (todolist.status[i] == -1) {
        i = todolist.size;
      } else if (todolist.status[i] == 0) {
        skip++;
      } else if (todolist.status[i] == 2) {
        Draw_Text(1, 3, i - skip, todolist.items[i]);
      } else {
        Draw_Text(1, 3, i - skip, todolist.items[i]);
      }
    }
  }
}
if (trace) Draw_Text(1, 3, 16, "updateTopScreen Ran");
