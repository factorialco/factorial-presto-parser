require 'presto_parser'

class IdentityVisitor < ::PrestoParser::AstVisitor
  def transform(sql)
    rewritten = accept(sql)
      .flatten
      .compact
      .join(' ')
    rewritten
  end

  def visit_terminal_node(context)
    return if context.text == '<EOF>'

    context.text
  end
end

puts IdentityVisitor.new.transform("SELECT whatevs3 3 FROM table")
