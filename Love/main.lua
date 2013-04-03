function love.load()
    if (math.random(0, 1) == 0) then
        love.graphics.setBackgroundColor(255, 0, 0)
    else
        love.graphics.setBackgroundColor(0, 0, 255)
    end
end

--[[
function love.update(dt)
end

function love.draw()
end

function love.quit()
end
--]]
