extern crate piston_window;
extern crate rand;

use piston_window::*;
use rand::Rng;

fn main() {
    let mut rng = rand::thread_rng();
    let colour = if rng.gen() {
        [1.0, 0.0, 0.0, 1.0] // Red
    } else {
       [0.0, 0.0, 1.0, 1.0] // Blue
    };

    let mut window: PistonWindow =
        WindowSettings::new("Hello Piston!", [640, 480])
        .exit_on_esc(true).build().unwrap();
    while let Some(event) = window.next() {
        window.draw_2d(&event, |_context, graphics| {
            clear(colour, graphics);
        });
    }
}
