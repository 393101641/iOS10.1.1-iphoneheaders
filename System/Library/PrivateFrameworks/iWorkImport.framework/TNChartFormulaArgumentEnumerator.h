/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSEnumerator;

@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration> {

	NSEnumerator* mUnderlyingEnumerator;

}
-(id)nextElement;
-(id)initWithEnumerator:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)nextObject;
@end

