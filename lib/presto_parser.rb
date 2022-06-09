# typed: strict
# load the native extension

require 'sorbet-runtime'

require File.expand_path(File.join('..', 'ext', 'presto_parser', 'presto_parser'), __dir__)

require 'presto_parser/ast_visitor'
