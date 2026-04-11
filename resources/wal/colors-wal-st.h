const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a1919", /* black   */
  [1] = "#1671C9", /* red     */
  [2] = "#5E97B6", /* green   */
  [3] = "#3388CE", /* yellow  */
  [4] = "#599ED1", /* blue    */
  [5] = "#8EA4B8", /* magenta */
  [6] = "#98B5CF", /* cyan    */
  [7] = "#c1c5c5", /* white   */

  /* 8 bright colors */
  [8]  = "#596e6e",  /* black   */
  [9]  = "#1671C9",  /* red     */
  [10] = "#5E97B6", /* green   */
  [11] = "#3388CE", /* yellow  */
  [12] = "#599ED1", /* blue    */
  [13] = "#8EA4B8", /* magenta */
  [14] = "#98B5CF", /* cyan    */
  [15] = "#c1c5c5", /* white   */

  /* special colors */
  [256] = "#0a1919", /* background */
  [257] = "#c1c5c5", /* foreground */
  [258] = "#c1c5c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
