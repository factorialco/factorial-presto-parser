# typed: false
require 'presto_parser'

puts PrestoParser::Parser.parse('SELECT * FROM `somewhere`')
    .query
