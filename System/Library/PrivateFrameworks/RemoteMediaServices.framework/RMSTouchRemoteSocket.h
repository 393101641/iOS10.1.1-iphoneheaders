/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol RMSTouchRemoteSocketDelegate;
@class NSOutputStream, NSString;

@interface RMSTouchRemoteSocket : NSObject <NSStreamDelegate> {

	NSOutputStream* _outputStream;
	NSString* _host;
	unsigned _port;
	unsigned _encryptionKey;
	id<RMSTouchRemoteSocketDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSTouchRemoteSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<RMSTouchRemoteSocketDelegate>)arg1 ;
-(void)dealloc;
-(id<RMSTouchRemoteSocketDelegate>)delegate;
-(void)connect;
-(void)disconnect;
-(id)_encryptData:(id)arg1 ;
-(id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3 ;
-(BOOL)sendTouchCode:(long long)arg1 timeInMilliseconds:(unsigned)arg2 location:(CGPoint)arg3 ;
@end
