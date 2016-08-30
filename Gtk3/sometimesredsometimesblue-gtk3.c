#include <gtk/gtk.h>
#include <bsd/stdlib.h>

int main (int argc, char** argv)
{
    gtk_init(&argc, &argv);

    GtkWidget* window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Sometimes red, sometimes blue");
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 100);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // TODO: Use the CSS to set to background colour
    GdkRGBA backgroundColour;
    if (arc4random_uniform(2) == 0)
    {
        // Red
        backgroundColour.green = 0.0;
        backgroundColour.red   = 1.0;
        backgroundColour.blue  = 0.0;
    }
    else
    {
        // Blue
        backgroundColour.green = 0.0;
        backgroundColour.red   = 0.0;
        backgroundColour.blue  = 1.0;
    }

    gtk_widget_override_background_color(window, 0, &backgroundColour);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
