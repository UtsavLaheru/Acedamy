from mdsvg.renderer import SVGRenderer

def convert_md_to_svg(input_file_path, output_file_path):
    # Read the markdown content from the file
    with open(input_file_path, 'r', encoding='utf-8') as f:
        markdown_text = f.read()

    # Create a renderer instance
    # You can customize styles like font size, width, etc.
    renderer = SVGRenderer()

    # Convert the markdown text to an SVG string
    svg_output = renderer.render(markdown_text)

    # Save the SVG string to an output file
    with open(output_file_path, 'w', encoding='utf-8') as f:
        f.write(svg_output)

    print(f"Successfully converted '{input_file_path}' to '{output_file_path}'")

Test = r"D:\Acedamy\.vscode\Mark Down\Test.md"
output = r"D:\Acedamy\.vscode\Mark Down\output.svg"


convert_md_to_svg(Test, output)
