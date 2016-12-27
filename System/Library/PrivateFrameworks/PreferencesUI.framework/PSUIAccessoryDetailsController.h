/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/EAAccessoryDelegate.h>

@class EAAccessory, NSString;

@interface PSUIAccessoryDetailsController : PSListController <EAAccessoryDelegate> {

	EAAccessory* _accessory;
	BOOL _shouldEscape;
	BOOL _finishedAppearing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)connect;
-(void)disconnect;
-(id)manufacturer;
-(id)serialNumber;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(id)bonjourName;
-(void)findAppForAccessory;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(id)modelNumber;
-(id)hardwareRevision;
-(id)firmwareRevision;
-(id)specifiers;
@end
