# typed: strict
require 'presto_parser'

class CustomVisitor < ::PrestoParser::AstVisitor
  extend T::Sig

  sig do
    override
      .params(context: PrestoParser::TerminalNodeImpl)
      .returns(String)
  end
  def visit_terminal_node(context)
    context.text
  end
end

puts CustomVisitor.new
  .accept('SELECT * FROM (SELECT * FROM `your_face`)')
  .join(' ')
