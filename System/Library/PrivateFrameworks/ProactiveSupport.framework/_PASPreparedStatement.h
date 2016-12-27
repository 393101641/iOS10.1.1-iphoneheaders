/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASSqliteDatabase;

@interface _PASPreparedStatement : NSObject <NSDiscardableContent, NSCopying> {

	_PASSqliteDatabase* _owner;
	BOOL _isFinalized;
	unsigned _useCount;
	sqlite3_stmtRef _stmt;

}

@property (nonatomic,readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(id)initWithStatementPointer:(sqlite3_stmtRef)arg1 owner:(id)arg2 ;
-(void)_finalizeWithLogWarning:(id)arg1 ;
-(sqlite3_stmtRef)stmt;
@end
