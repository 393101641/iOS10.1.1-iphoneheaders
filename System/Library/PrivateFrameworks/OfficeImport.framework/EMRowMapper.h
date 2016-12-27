/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

@interface EMRowMapper : CMMapper {

	EDRowBlock* mRowBlock;
	EDRowInfo* mRowInfo;
	double* columnGrid;
	unsigned long long columnCount;

}
+(void)mapEmptyRowAt:(id)arg1 colspan:(unsigned long long)arg2 height:(double)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(BOOL)isColumnHidden:(unsigned long long)arg1 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned long long)arg1 ;
-(void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned long long)arg2 height:(double)arg3 ;
-(void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned long long)arg3 lastColumn:(unsigned long long)arg4 ;
-(id)initWithEDRowBlock:(id)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 ;
-(BOOL)isMergedCell:(EDCellHeader*)arg1 ;
@end
