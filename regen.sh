gem uninstall trino_parser
make -C ext/trino_parser clean
rm -rf ext/trino_parser/antlrgen
rake generate
rake build
gem install pkg/trino_parser-1.0.0.gem