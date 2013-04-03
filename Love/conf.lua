function love.conf(t)
    t.title = "Somtimes red, sometimes blue"
    t.author = "Unnamed"
    t.url = nil                 -- The website of the game (string)
    t.identity = nil            -- The name of the save directory (string)
    t.version = "0.8.0"         -- The LOVE version this game was made for (string)
    t.console = false           -- Attach a console (boolean, Windows only)
    t.release = false           -- Enable release mode (boolean)
    t.screen.width = 800        -- The window width (number)
    t.screen.height = 600       -- The window height (number)
    t.screen.fullscreen = false -- Enable fullscreen (boolean)
    t.screen.vsync = true       -- Enable vertical sync (boolean)
    t.screen.fsaa = 0           -- The number of FSAA-buffers (number)
    t.modules.joystick = false
    t.modules.audio = false
    t.modules.keyboard = false
    --t.modules.event = false -- hangs if I disable this
    t.modules.image = false
    t.modules.graphics = true   -- Enable the graphics module (boolean)
    t.modules.timer = false
    t.modules.mouse = false
    t.modules.sound = false
    t.modules.physics = false
end
