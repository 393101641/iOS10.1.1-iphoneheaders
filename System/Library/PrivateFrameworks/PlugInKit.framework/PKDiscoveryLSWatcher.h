/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {

	PKDiscoveryDriver* _wdriver;

}

@property (__weak) PKDiscoveryDriver * wdriver;                     //@synthesize wdriver=_wdriver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)update;
-(void)setWdriver:(PKDiscoveryDriver *)arg1 ;
-(PKDiscoveryDriver *)wdriver;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)stopUpdates;
-(id)initWithDriver:(id)arg1 ;
@end

