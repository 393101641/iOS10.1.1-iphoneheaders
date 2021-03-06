/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ODRDeveloperToolsProtocol <NSObject>
@required
-(void)tagStatusForBundle:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getSimulatedBandwidthWithReply:(/*^block*/id)arg1;
-(void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;

@end

