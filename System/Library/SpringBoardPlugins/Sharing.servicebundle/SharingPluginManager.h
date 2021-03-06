/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/Sharing.servicebundle/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SBBulletinAlertHandler.h>
#import <Sharing/SBControlCenterObserver.h>
#import <Sharing/SFAlertItemDelegate.h>
#import <Sharing/SFAirDropTransferDataProviderDelegate.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@class NSMutableDictionary, NSString;

@interface SharingPluginManager : NSObject <SBBulletinAlertHandler, SBControlCenterObserver, SFAlertItemDelegate, SFAirDropTransferDataProviderDelegate, SBPluginBundleController> {

	NSMutableDictionary* _recordIDToAlertItem;
	BOOL _screenDimmed;
	BOOL _lookingForEvent;
	BOOL _deviceUnlocked;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)awakeFromBundle;
+(id)sharedInstance;
-(void)showAlertForRecordID:(id)arg1 ;
-(void)alertItemShouldBeRepresented:(id)arg1 ;
-(void)alertItemDidDismiss:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)connectToDaemon;
-(void)withdrawTransferDataWithRecordID:(id)arg1 ;
-(void)showAcceptAlertForRecordID:(id)arg1 ;
-(void)showProgressAlertForRecordID:(id)arg1 ;
-(void)showFailedAlertForRecordID:(id)arg1 ;
-(void)showCancelledAlertForRecordID:(id)arg1 ;
-(BOOL)bindBulletin:(id)arg1 forRegistry:(id)arg2 ;
-(void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
@end

