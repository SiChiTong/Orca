///////////////////////////////////////////////////////////
//  NewMessageNoticeHandler.h
//  Implementation of the Class NewMessageNoticeHandler
//  Created on:      13-����-2012 5:16:43
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_DC4391D8_C368_4fb1_AF7F_5BC386ABD0D9__INCLUDED_)
#define EA_DC4391D8_C368_4fb1_AF7F_5BC386ABD0D9__INCLUDED_

class NewMessageNoticeHandler
{

public:
	NewMessageNoticeHandler();
	virtual ~NewMessageNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_DC4391D8_C368_4fb1_AF7F_5BC386ABD0D9__INCLUDED_)
