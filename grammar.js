module.exports = grammar({
    name: 'weave',

    extras: $ => [/\s/, $.comment],

    rules: {
        source_file: $ => repeat(choice($.macro, $.label_define, $.instruction)),
        comment: $ => token(seq("#", /.*/)),

        macro: $ => seq(
            '!',
            'macro',
            field('name', $.identifier),
            optional($.macro_args),
            ':',
            $.macro_body,
            ';'
        ),

        macro_args: $ => repeat1($.identifier),

        macro_body: $ => repeat1(choice($.label_define, $.instruction, $.instruction_arg)),

        label_define: $ => seq(
            '.',
            field('name', $.identifier),
            ':'
        ),

        instruction: $ => seq(
            field('name', $.identifier),
            optional($.instruction_args),
            $.newline
        ),

        instruction_args: $ => seq(
            $.instruction_arg,
            repeat(seq(
                ',',
                $.instruction_arg
            ))
        ),

        instruction_arg: $ => choice(
            $.register,
            $.macro_arg_ref,
            $.label_ref,
            $.number,
            $.string,
            $.char
        ),

        label_ref: $ => seq(
            '.',
            field('name', $.identifier),
        ),

        register: $ => seq(
            '%',
            field('name', $.identifier),
        ),

        macro_arg_ref: $ => seq(
            '$',
            field('name', $.identifier),
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,
        // support 0x, 0b too
        number: $ => /0x[0-9a-fA-F]+|0b[01]+|[0-9]+/,
        string: $ => /"[^"]*"/,
        char: $ => /'[^']+'/,
        newline: $ => /\n/,
    }
});

