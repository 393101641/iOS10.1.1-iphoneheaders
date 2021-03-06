/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, TSUReadChannel;
@class NSObject;

@interface TSUZipFileDescriptorWrapper : NSObject {

	NSObject*<OS_dispatch_group> _accessGroup;
	int _fileDescriptor;
	id<TSUReadChannel> _readChannel;

}

@property (nonatomic,readonly) int fileDescriptor;                          //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<TSUReadChannel> readChannel;              //@synthesize readChannel=_readChannel - In the implementation block
-(id<TSUReadChannel>)readChannel;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(void)waitForAccessToEnd;
-(void)beginAccess;
-(void)endAccess;
-(id)init;
-(void)dealloc;
-(int)fileDescriptor;
@end

