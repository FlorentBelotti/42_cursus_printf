<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <header>
        <h1>42_cursus_printf</h1>
        <p>Recode the printf() function to learn about variadic functions and improve your C programming skills.</p>
    </header>
    <section>
        <h2>Introduction</h2>
        <p>This project involves recreating the libc's printf() function. This will introduce you to variadic functions in C, a critical skill for handling functions that accept an indefinite number of arguments. Implementing this function will help you understand more about handling different data types and formatting output.</p>
    </section>
    <section>
        <h2>Common Instructions</h2>
        <ul>
            <li>The project must be coded in C and conform to the coding norm.</li>
            <li>Handle memory properly - no leaks are tolerated.</li>
            <li>Submit a Makefile that compiles your project with appropriate flags and does not relink.</li>
            <li>Do not implement buffer management like the original printf().</li>
        </ul>
    </section>
    <section>
        <h2>Mandatory Part</h2>
        <p>Your implementation of ft_printf() must handle the following conversions: c, s, p, d, i, u, x, X, and %.</p>
        <ul>
            <li>%c: Prints a single character.</li>
            <li>%s: Prints a string.</li>
            <li>%p: Prints a void * pointer in hexadecimal format.</li>
            <li>%d and %i: Print a signed integer in base 10.</li>
            <li>%u: Prints an unsigned decimal (base 10) number.</li>
            <li>%x: Prints a number in hexadecimal (base 16) lowercase.</li>
            <li>%X: Prints a number in hexadecimal (base 16) uppercase.</li>
            <li>%%: Prints a percent sign.</li>
        </ul>
    </section>
    <section>
        <h2>Bonus Part</h2>
        <p>For those who complete the mandatory part perfectly, the bonus part includes handling flags and minimum field widths under all conversions.</p>
        <ul>
            <li>Flags: '-', '0', '.', '#', '+', and ' '(space).</li>
        </ul>
    </section>
    <section>
        <h2>Compilation</h2>
        <p>Compile the library using the Makefile provided, ensuring all rules like <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code> are present to manage the library properly.</p>
    </section>
    <section>
        <h2>Submission and Evaluation</h2>
        <p>Submit your work on your assigned Git repository. Only the work present on the Git repository will be evaluated during the defense.</p>
    </section>
</body>
</html>
