/*

    (c) 2013 Airic Lenz 
	
	See www.airiclenz.com for more information
        
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


#ifndef LinearFunction_h
#define LinearFunction_h


#include "Point.h"


// ============================================================================
// ============================================================================
// ============================================================================
class LinearFunction {


	///////////////////////////////////////////
	public:
	///////////////////////////////////////////
				
		float 	slope;
		float 	yoffset;
		float	xstart;
		
		LinearFunction(void);
		LinearFunction(Point, Point);
		
		float			getY(float);
		LinearFunction	clone(void);
		
	///////////////////////////////////////////
	private:
	///////////////////////////////////////////
		
		// nothing
		
};

#endif		