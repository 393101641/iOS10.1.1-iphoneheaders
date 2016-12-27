/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSURL.h>

@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL {

	TSUTemporaryDirectory* _parentDirectory;

}

@property (nonatomic,readonly) TSUTemporaryDirectory * parentDirectory;              //@synthesize parentDirectory=_parentDirectory - In the implementation block
-(id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2 ;
-(TSUTemporaryDirectory *)parentDirectory;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
