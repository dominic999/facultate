#!/usr/bin/env zsh

script_dir=${0:A:h}
export PATH="$script_dir/fake-bin:$PATH"

echo "Fake ip activat in sesiunea curenta."
echo "Acum 'ip a' afiseaza doar interfata loopback."
echo "Pentru revenire, inchide terminalul sau ruleaza: hash -r; export PATH=\"\${PATH#${script_dir}/fake-bin:}\""
