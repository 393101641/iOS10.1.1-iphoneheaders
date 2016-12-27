/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)firstChild;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(unsigned)tokenIndex;
-(void)setFirstChild:(id)arg1 ;
-(id)sibling;
-(void)setSibling:(id)arg1 ;
@end
