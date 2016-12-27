/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue, TSPComponentWriteChannel;
@class NSObject, NSString;

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _writeQueue;
	char _uncompressedBuffer[65536];
	unsigned long long _uncompressedLength;
	id<TSPComponentWriteChannel> _writeChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWriteChannel:(id)arg1 ;
-(void)writeBlock;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
@end
