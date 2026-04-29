const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a1019", /* black   */
  [1] = "#877956", /* red     */
  [2] = "#3C8467", /* green   */
  [3] = "#4E8F6A", /* yellow  */
  [4] = "#6EA06D", /* blue    */
  [5] = "#93AD70", /* magenta */
  [6] = "#B8CB76", /* cyan    */
  [7] = "#c1c3c5", /* white   */

  /* 8 bright colors */
  [8]  = "#59616e",  /* black   */
  [9]  = "#877956",  /* red     */
  [10] = "#3C8467", /* green   */
  [11] = "#4E8F6A", /* yellow  */
  [12] = "#6EA06D", /* blue    */
  [13] = "#93AD70", /* magenta */
  [14] = "#B8CB76", /* cyan    */
  [15] = "#c1c3c5", /* white   */

  /* special colors */
  [256] = "#0a1019", /* background */
  [257] = "#c1c3c5", /* foreground */
  [258] = "#c1c3c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
