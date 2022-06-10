#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>
# include <ostream>
# include <string>
# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<unsigned int> vec;
		unsigned int n;
	public:
			Span(unsigned int n);
			Span(Span const &other);
			virtual ~Span();
			
			Span &operator=(Span const &other);
			
			void addNumber(unsigned int n);
			unsigned int shortestSpan() const;
			unsigned int longestSpan() const;

			class FillException: public std::exception{
				public:
					virtual const char * what() const throw();
			};

			class ExecutionException: public std::exception{
				public:
					virtual const char * what() const throw();
			};

};

	std::ostream &operator<<(std::ostream &out, Span const &other);

#endif
