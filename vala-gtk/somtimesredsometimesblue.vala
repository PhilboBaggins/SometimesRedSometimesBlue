using Gtk;

int main(string[] args) {
    Gtk.init(ref args);

    // Random colour; red or blue
    var colour = Gdk.Color();
    colour.green = 0;
    if (GLib.Random.int_range(0, 2) == 0)
    {
        colour.red = 255;
        colour.blue = 0;
    }
    else
    {
        colour.red = 0;
        colour.blue = 255;
    }

    var window = new Window();
    window.title = "Sometimes red, sometimes blue";
    window.border_width = 10;
    window.window_position = WindowPosition.CENTER;
    window.modify_base(StateType.ACTIVE, colour);
    window.modify_bg(StateType.ACTIVE, colour);
    window.set_default_size(800, 600);
    window.destroy.connect(Gtk.main_quit);
    window.show_all();

    Gtk.main();
    return 0;
}
