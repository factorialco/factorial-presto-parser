require 'trino_parser'

parser = TrinoParser::Parser.parse('SELECT 1')
puts parser.singleStatement.methods - Object.methods
puts parser.singleStatement.text