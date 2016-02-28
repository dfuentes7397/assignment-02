* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 DAVID_FUENTES <dfuentes7397@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Implements `buffer.h`.
 */

// TODO: `#include`s for system headers, if necessary

#include "buffer.h"

// TODO: `#include`s for other local headers, if necessary

// ----------------------------------------------------------------------------

class Buffer {
private:
	char * data_;
	/**
	* Our character data.
	*
	* Since we don't know how big the array will be, we can't use a
	* regular (stack allocated) array.  In the constructor, this will be
	* initialized to a 1D array large enough to hold all the values, and
	* we will emulate using it as a 2D array by taking the index as
	* ```
	* data_[ y * size_x + x ];
	* ```
	* (where, if it were a real 2D array, we could have said
	* `data_[y][x]`).
	*/

public:
	const unsigned int size_x;
	/**
	* The number of "columns" (x values) in `data_`.
	*/

	const unsigned int size_y;
	/**
	* The number of "rows" (y values) in `data_`.
	*/


	Buffer::Buffer(unsigned int size_x, unsigned int size_y)
		: size_x(size_x),size_y(size_y)
	{
		data_ = new char[size_x*size_y];
		for (unsigned int i = 0; i < size_x*size_y; i++)
			data_[i] = ' ';

	}
	/**
	* The constructor.
	*
	* Must initialize `size_x` and `size_y`, and allocate memory for (and
	* initialize) `data_`.
	*
	* Notes:
	* - Since `size_x` and `size_y` are constant, they must be initialized
	*   in the initialization list, rather than set in the constructor
	*   body.
	* - You may assume that the dynamic memory allocation succeeds.
	*/

	Buffer::~Buffer()
	{
		delete[]data_;
	}
	
	/**
	* The destructor.
	*
	* Must free the memory that the constructor allocated to `data_`.
	*/


	char get(unsigned int x, unsigned int y) const;
	{
		return ' ';
	}
	/**
	* Return the character at `data_[ y * size_x + x ]`.
	*
	* If `x` or `y` is out of bounds, should write
	* ```
	* "ERROR: `Buffer::get`: index out of bounds\n"
	* ```
	* to `cerr` and `exit(1)`.
	*/

	void set(unsigned int x, unsigned int y, char c);
	{
		data_[y*size_x + x] = 'c';

	}
	/**
	* Set the character at `data_[ y * size_x + x ]` to `c`.
	*
	* If `x` or `y` is out of bounds, should write
	* ```
	* "ERROR: `Buffer::set`: index out of bounds\n"
	* ```
	* to `cerr` and `exit(1)`.
	*/

	void set(unsigned int pos_x, unsigned int pos_y, std::string s);
	{

	}
	/**
	* Overlay `s` onto `data_`.
	*
	* For example, if this buffer is representing an array that looks like
	* ```
	* *******
	* *******
	* *******
	* *******
	* *******
	* ```
	* and we call `set(1, 2, "hello\nworld")`, the buffer's contents
	* should now be
	* ```
	* *******
	* *******
	* *hello*
	* *world*
	* *******
	* ```
	*
	* Notes:
	* - This function may call the other `set` (which takes a `char` as
	*   its last argument), if you like.  In that case, you may leave the
	*   index error checking to the other `set`.  Otherwise, you should
	*   have checks in this function to make sure you're not putting
	*   characters where they don't belong.
	* - This function will be useful when implementing the `Shape` class.
	* - If you can't think of a way to do this, see
	*   `solution---Buffer-set.md`.
	*/


	void draw() const;
	{

	}
	/**
	* Output the contents of the buffer to `cout`.
	*/


	void clear();
	{

	}
	/**
	* Set each element `data_` to ' '.
	*/
};
