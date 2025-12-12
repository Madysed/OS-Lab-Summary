function detect_os
    switch (uname)
        case Linux
            echo Hi Tux!
        case Darwin
            echo Hi Hexley!
        case '*BSD' DragonFly
            echo Hi Beastie!
        case '*'
            echo Hi, stranger!
    end
end
detect_os  # Run it