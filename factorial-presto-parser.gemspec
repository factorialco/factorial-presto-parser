$:.unshift File.join(File.dirname(__FILE__), 'lib')
require 'presto_parser/version'

Gem::Specification.new do |s|
  s.name     = 'factorial-presto-parser'
  s.version  = ::PrestoParser::VERSION
  s.authors  = ['Factorial']
  s.email    = ['admin@factorial.co']
  s.homepage = 'http://factorialhr.com'

  s.description = s.summary = 'A Presto parser for Ruby'

  s.platform = Gem::Platform::RUBY

  s.add_dependency 'rice', '~> 4.0'

  s.extensions = File.join('ext', 'presto_parser', 'extconf.rb')
  s.licenses = ['MIT']

  s.require_path = 'lib'
  s.files = Dir[
    '{lib,spec}/**/*',
    'ext/presto_parser/*.{cpp,h}',
    'ext/presto_parser/extconf.rb',
    'ext/presto_parser/antlrgen/*',
    'ext/presto_parser/antlr4-upstream/runtime/Cpp/runtime/src/**/*.{cpp,h}',
    'Gemfile',
    'README.md',
    'Rakefile',
    'factorial-presto-parser.gemspec'
  ]
end
