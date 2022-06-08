# Factorial Presto Parser

This is a Ruby gem containing a parser for the [Presto](https://trino.io/) SQL dialect (now rebranded as Trino). It has been generated using the [antlr4-native gem](https://rubygems.org/gems/antlr4-native) from the [Presto grammar specification](https://github.com/prestodb/presto/blob/0.172/presto-parser/src/main/antlr4/com/facebook/presto/sql/parser/SqlBase.g4), found in the [official Presto repository](https://github.com/prestodb/presto).

Note that this gem supports specifically the version 0.172 of Presto, since that's the one used by AWS Athena.

## Building

```ruby
bundle install
rake build
gem install pkg/presto_parser-1.0.0.gem
```

## Trying it out

In `irb`:

```ruby
require 'presto_parser'

statement = PrestoParser::Parser.parse('SELECT 1')
puts statement.singleQuery
```

## Messing with the parser's code

> #### Note
> We are using a manually modified version of the original grammar that excludes write operations and only allows database queries. This is accomplished by lowering the grammar's axiom down to the `query` rule, thus making anything else unrecognizable to the parser.
>
> Also, some constructs in the grammar prevented C++ compilation, so they have been removed or renamed. The changes made to the original grammar can be found in the `Presto.g4.patch` file.

### Regenerate
To regenerate the parser code from the grammar file you can use

```sh
rake generate
```

Be aware that this will overwrite any changes in the C++ code of the parser, as well as the `Makefile` found in the `ext/presto_parser` directory.

### Compile
To manually compile the C++ native extension you can do it like this:

```sh
rake compile
```
