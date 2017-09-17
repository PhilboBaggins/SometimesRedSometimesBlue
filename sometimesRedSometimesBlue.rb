#!/usr/bin/env ruby
# Taking Ruby to it's logical conclusion: Monkey patching
# a random red/blue chooser onto Object

class Object
    def method_missing(m, *args, &block)
        ['Red', 'Blue'].sample
    end
end

puts Object.new.-
