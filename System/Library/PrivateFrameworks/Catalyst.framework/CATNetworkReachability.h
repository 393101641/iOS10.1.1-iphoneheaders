/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATNetworkReachabilityDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class CATAddress;

@interface CATNetworkReachability : NSObject {

	SCNetworkReachabilityRef mReachabilityRef;
	unsigned _flags;
	CATAddress* _address;
	id<CATNetworkReachabilityDelegate> _delegate;

}

@property (assign,nonatomic) unsigned flags;                                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) CATAddress * address;                                          //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) id<CATNetworkReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
+(BOOL)isReachableForLocalWiFiWithFlags:(unsigned)arg1 ;
+(BOOL)isReachableForNetworkWithFlags:(unsigned)arg1 ;
+(id)keyPathsForValuesAffectingReachable;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<CATNetworkReachabilityDelegate>)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id<CATNetworkReachabilityDelegate>)delegate;
-(id)initWithAddress:(id)arg1 ;
-(CATAddress *)address;
-(void)configureCallback;
-(void)reachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(void)delegateDidChange;
-(BOOL)isReachable;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end
