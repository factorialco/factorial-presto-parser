# typed: strict
require 'presto_parser'

class CustomVisitor < ::PrestoParser::AstVisitor
  # extend T::Sig

  # sig do
  #   override
  #     .params(context: PrestoParser::QuerySpecificationContext)
  #     .returns(String)
  # end
  def visit_query_specification(context)
    puts 'Hello!'
  end
end

CustomVisitor.new.accept('SELECT * FROM `your_face`')