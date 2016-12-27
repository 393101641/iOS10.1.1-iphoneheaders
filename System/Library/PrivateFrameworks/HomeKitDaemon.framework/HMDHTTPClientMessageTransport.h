/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFHTTPClientDelegate.h>

@protocol HMDHTTPClientMessageTransportDelegate;
@class NSUUID, HMFNetService, HMDHTTPDevice, HMFHTTPClient, NSString;

@interface HMDHTTPClientMessageTransport : NSObject <HMFHTTPClientDelegate> {

	BOOL _running;
	id<HMDHTTPClientMessageTransportDelegate> _delegate;
	NSUUID* _identifier;
	HMFNetService* _netService;
	HMDHTTPDevice* _remoteDevice;
	HMFHTTPClient* _client;

}

@property (nonatomic,readonly) HMFHTTPClient * client;                              //@synthesize client=_client - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                         //@synthesize running=_running - In the implementation block
@property (__weak) id<HMDHTTPClientMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFNetService * netService;                          //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) HMDHTTPDevice * remoteDevice;                        //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(id)init;
-(void)setDelegate:(id<HMDHTTPClientMessageTransportDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDHTTPClientMessageTransportDelegate>)delegate;
-(NSUUID *)identifier;
-(void)stop;
-(BOOL)isRunning;
-(id)shortDescription;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMFHTTPClient *)client;
-(void)setRunning:(BOOL)arg1 ;
-(id)logIdentifier;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isReachable;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMDHTTPDevice *)remoteDevice;
-(id)initWithIdentifier:(id)arg1 netService:(id)arg2 ;
-(HMFNetService *)netService;
-(void)_stopWithError:(id)arg1 ;
-(void)_receiveMessage;
-(void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2 ;
-(void)sendPingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 didRequestPingWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)clientDidBecomeUnreachable:(id)arg1 ;
@end
