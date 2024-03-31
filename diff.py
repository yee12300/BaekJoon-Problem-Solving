import difflib

output_file = 'output.txt'
answer_file = 'answer.txt'
diff_file = 'diff.txt'

with open(output_file, 'r') as f_output, open(answer_file, 'r') as f_answer, open(diff_file, 'w') as f_diff:
    output_lines = f_output.readlines()
    answer_lines = f_answer.readlines()

    diff = difflib.unified_diff(output_lines, answer_lines)

    for line in diff:
        f_diff.write(line)
