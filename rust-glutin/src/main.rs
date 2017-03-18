extern crate gl;
extern crate glutin;
extern crate rand;

use rand::Rng;

fn main() {
    let window = glutin::Window::new().unwrap();

    let _ = unsafe { window.make_current() };

    gl::load_with(|symbol| window.get_proc_address(symbol) as *const _);

    let mut rng = rand::thread_rng();
    if rng.gen() {
        unsafe { gl::ClearColor(1.0, 0.0, 0.0, 1.0); }  // Red
    }
    else {
        unsafe { gl::ClearColor(0.0, 0.0, 1.0, 1.0); }  // Blue
    }

    for event in window.wait_events() {
        unsafe { gl::Clear(gl::COLOR_BUFFER_BIT) };
        let _ = window.swap_buffers();

        match event {
            glutin::Event::Closed => break,
            _ => ()
        }
    }
}
