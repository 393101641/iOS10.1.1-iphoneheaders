/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {

	NSString* _path;
	int _fd;

}
-(BOOL)tryLock;
-(BOOL)_lockBlocking:(BOOL)arg1 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
@end
