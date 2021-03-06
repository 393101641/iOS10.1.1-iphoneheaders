/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDAVRoutingDelegate.h>
#import <mediaremoted/MRDXPCMessageHandling.h>

@class NSMutableSet, MRDAVRoutingDataSource, MSVSystemDialog, NSString;

@interface MRDAVRoutingServer : NSObject <MRDAVRoutingDelegate, MRDXPCMessageHandling> {

	int _externalScreenTypeDidChangeToken;
	NSMutableSet* _routeHashesToIgnorePortStatusFailures;
	int _mostRecentStatus;
	MRDAVRoutingDataSource* _routingDataSource;
	MSVSystemDialog* _activePasswordDialog;

}

@property (nonatomic,retain) MSVSystemDialog * activePasswordDialog;                    //@synthesize activePasswordDialog=_activePasswordDialog - In the implementation block
@property (nonatomic,readonly) MRDAVRoutingDataSource * routingDataSource;              //@synthesize routingDataSource=_routingDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pickRouteWithUID:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(id)initWithRoutingDataSource:(id)arg1 ;
-(MRDAVRoutingDataSource *)routingDataSource;
-(void)routingDataSourcePickableRoutesDidChange:(id)arg1 ;
-(void)routingDataSourcePickedRouteVolumeControlAvailabilityDidChange:(id)arg1 ;
-(void)routingDataSourceExternalScreenDidChange:(id)arg1 ;
-(void)routingDataSource:(id)arg1 statusDidChange:(int)arg2 forRoute:(id)arg3 ;
-(id)_descriptionForDiscoveryMode:(unsigned)arg1 ;
-(void)_updateSystemRouteDiscoveryMode;
-(BOOL)_setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned)arg3 ;
-(void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleUnpickAirPlayRoutesMessage:(id)arg1 fromClient:(id)arg2 ;
-(BOOL)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned)arg3 ;
-(void)_postExternalScreenDidChange;
-(void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_handleErrorStatus:(int)arg1 forRoute:(id)arg2 withOptions:(unsigned)arg3 ;
-(void)_clientInvalidatedNotification:(id)arg1 ;
-(void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)setActivePasswordDialog:(MSVSystemDialog *)arg1 ;
-(BOOL)routeIsActiveWithUID:(id)arg1 ;
-(MSVSystemDialog *)activePasswordDialog;
-(void)dealloc;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
@end

