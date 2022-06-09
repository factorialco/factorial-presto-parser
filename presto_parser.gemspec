$:.unshift File.join(File.dirname(__FILE__), 'lib')
require 'presto_parser/version'

Gem::Specification.new do |s|
  s.name     = 'presto_parser'
  s.version  = ::PrestoParser::VERSION
  s.authors  = ['Factorial']
  s.email    = ['admin@factorial.co']
  s.homepage = 'http://factorialhr.com'

  s.description = s.summary = 'A Presto parser for Ruby'

  s.platform = Gem::Platform::RUBY

  s.add_dependency 'rice', '~> 4.0'

  s.extensions = File.join(*%w(ext presto_parser extconf.rb))

  s.require_path = 'lib'
  s.files = Dir[
    '{lib,spec,rbi}/**/*',
    'ext/presto_parser/*.{cpp,h}',
    'ext/presto_parser/extconf.rb',
    'ext/presto_parser/antlrgen/*',
    'ext/presto_parser/antlr4-upstream/runtime/Cpp/runtime/src/**/*.{cpp,h}',
    'Gemfile',
    'README.md',
    'Rakefile',
    'presto_parser.gemspec'
  ]
end
