extern crate gl;
extern crate glutin;
extern crate rand;

use glutin::GlContext;

use rand::Rng;

fn main() {
    let mut events_loop = glutin::EventsLoop::new();
    let window = glutin::WindowBuilder::new()
        .with_title("Sometimes red, sometimes blur")
        //.with_dimensions(1024, 768)
        ;

    let context = glutin::ContextBuilder::new()
        .with_vsync(true);
    let gl_window = glutin::GlWindow::new(window, context, &events_loop).unwrap();

    unsafe {
        gl_window.make_current().unwrap();
    }

    gl::load_with(|symbol| gl_window.get_proc_address(symbol) as *const _);

    let mut rng = rand::thread_rng();
    if rng.gen() {
        unsafe { gl::ClearColor(1.0, 0.0, 0.0, 1.0); }  // Red
    }
    else {
        unsafe { gl::ClearColor(0.0, 0.0, 1.0, 1.0); }  // Blue
    }

    let mut running = true;
    while running {
        unsafe { gl::Clear(gl::COLOR_BUFFER_BIT) };
        gl_window.swap_buffers().unwrap();

        events_loop.poll_events(|event| {
            match event {
                glutin::Event::WindowEvent{ event, .. } => match event {
                    glutin::WindowEvent::Closed => running = false,
                    _ => ()
                },
                _ => ()
            }
        });
    }
}
