static const char norm_fg[] = "#c1c5c5";
static const char norm_bg[] = "#0a1919";
static const char norm_border[] = "#596e6e";

static const char sel_fg[] = "#c1c5c5";
static const char sel_bg[] = "#5E97B6";
static const char sel_border[] = "#c1c5c5";

static const char urg_fg[] = "#c1c5c5";
static const char urg_bg[] = "#1671C9";
static const char urg_border[] = "#1671C9";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
