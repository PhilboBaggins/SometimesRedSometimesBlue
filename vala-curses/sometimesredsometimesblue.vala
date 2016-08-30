// http://www.vala-project.org/doc/references/glib-2.0.vapi/GLib/Random.htm
// http://www.vala-project.org/doc/references/glib-2.0.vapi/GLib/Rand.htm

using Curses;

int main(string[] args)
{
    initscr();

    start_color();
    if (GLib.Random.int_range(0, 2) == 0)
        init_pair(1, Color.GREEN, Color.RED);
    else
        init_pair(1, Color.GREEN, Color.BLUE);

    var win = new Window(LINES, COLS, 0, 0);

    win.bkgdset(COLOR_PAIR(1)); // Set background
    win.clrtobot();

    flash(); // Make it look a little flashy

    win.getch(); // Wait until user presses any key
    endwin();

    return 0;
}
