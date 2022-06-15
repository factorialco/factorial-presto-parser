gem uninstall presto_parser
make -C ext/presto_parser clean
rm -rf ext/presto_parser/antlrgen
rake generate
rake build
gem install ./pkg/presto_parser-1.0.0.gem