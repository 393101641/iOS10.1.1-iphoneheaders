/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreStreamProvider <NSObject>
@required
-(void)setDelegate:(id)arg1;
-(void)close;
-(id)connectionType;
-(id)headerData;
-(id)analysisInfo;
-(void)setConnectByPOPMethod:(BOOL)arg1;
-(void)openStreamPairForURL:(id)arg1 withConnectionId:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)shouldFallbackQuickly;
-(void)getRemoteMetrics:(/*^block*/id)arg1;
-(BOOL)isPeerConnectionError:(id)arg1;
-(BOOL)shouldFallbackFromError:(id)arg1;
-(id)getResolvedHost;

@end

