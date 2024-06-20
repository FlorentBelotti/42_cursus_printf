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
    <nav>
        <h2>Table of Contents</h2>
        <ul>
            <li><a href="#introduction">Introduction</a></li>
            <li><a href="#common-instructions">Common Instructions</a></li>
            <li><a href="#mandatory-part">Mandatory Part</a></li>
            <li><a href="#bonus-part">Bonus Part</a></li>
            <li><a href="#compilation">Compilation</a></li>
        </ul>
    </nav>
    <section id="introduction">
        <h2>Introduction</h2>
        <p>This project involves recreating the libc's printf() function. This will introduce you to variadic functions in C, a critical skill for handling functions that accept an indefinite number of arguments. Implementing this function will help you understand more about handling different data types and formatting output.</p>
    </section>
    <section id="common-instructions">
        <h2>Common Instructions</h2>
        <ul>
            <li>The project must be coded in C and conform to the coding norm.</li>
            <li>Handle memory properly - no leaks are tolerated.</li>
            <li>Submit a Makefile that compiles your project with appropriate flags and does not relink.</li>
            <li>Do not implement buffer management like the original printf().</li>
        </ul>
    </section>
    <section id="mandatory-part">
        <h2>Mandatory Part</h2>
        <p>Your implementation of ft_printf() must handle the following conversions: c, s, p, d, i, u, x, X, and %.</p>
        <ul>
            <li><code>%c</code> Prints a single character.</li>
            <li><code>%s</code> Prints a string.</li>
            <li><code>%p</code> Prints a void * pointer in hexadecimal format.</li>
            <li><code>%d</code> and <code>%i</code> Print a signed integer in base 10.</li>
            <li><code>%u</code> Prints an unsigned decimal (base 10) number.</li>
            <li><code>%x</code> Prints a number in hexadecimal (base 16) lowercase.</li>
            <li><code>%X</code> Prints a number in hexadecimal (base 16) uppercase.</li>
            <li><code>%%</code> Prints a percent sign.</li>
        </ul>
    </section>
    <section id="bonus-part">
        <h2>Bonus Part</h2>
        <p>For those who complete the mandatory part perfectly, the bonus part includes handling flags and minimum field widths under all conversions.</p>
        <ul>
            <li>Flags: '-', '0', '.', '#', '+', and ' '(space).</li>
        </ul>
    </section>
    <section id="compilation">
        <h2>Compilation</h2>
        <p>Compile the library using the Makefile provided, ensuring all rules like <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code> are present to manage the library properly.</p>
</body>
</html>
