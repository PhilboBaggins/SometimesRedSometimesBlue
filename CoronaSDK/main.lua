
-- GLOBALS: math, display, os, Runtime

local function SometimesRedSometimesBlue()
    local zeroOrOne = math.round(math.random())

    if zeroOrOne == 0 then
        display.setDefault( "background", 0, 0, 1 ) -- Red
    else
        display.setDefault( "background", 1, 0, 0 ) -- Blue
    end

    -- Always return true in case this function is used as an event handler
    return true
end

local function main()
    math.randomseed(os.time())

    display.setStatusBar(display.HiddenStatusBar)

    Runtime:addEventListener('touch', SometimesRedSometimesBlue)
    Runtime:addEventListener('system', function(event)
        if event.type == "applicationStart" or
           event.type == 'applicationResume' then
            return SometimesRedSometimesBlue()
        end
    end)
    Runtime:addEventListener("accelerometer", function(event)
        if event.isShake then
            return SometimesRedSometimesBlue()
        end
    end)
end

main()
