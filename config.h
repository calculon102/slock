/* user and group to drop privileges to */
static const char *user  = "frank";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 30;

/* default message */
static const char * message = "Locked.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
// static const char * font_name = "-misc-hack-medium-r-normal--0-0-0-0-m-0-iso8859-15";
static const char * font_name = "-adobe-courier-medium-o-normal--24-240-75-75-m-150-iso8859-15";
