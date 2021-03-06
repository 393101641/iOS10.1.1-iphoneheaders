/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CarKitSettings/CarKitSettings-Structs.h>
@class UIViewController, UIAlertController;

@interface CRRadiosAvailabilityPrompt : NSObject {

	WiFiManagerClientRef _wifiManager;
	BOOL _needsPresentationConsideration;
	UIViewController* _presentingController;
	UIAlertController* _presentedAlertController;

}

@property (assign,nonatomic) BOOL needsPresentationConsideration;                              //@synthesize needsPresentationConsideration=_needsPresentationConsideration - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * presentedAlertController;              //@synthesize presentedAlertController=_presentedAlertController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingController;                   //@synthesize presentingController=_presentingController - In the implementation block
-(void)setPresentingController:(UIViewController *)arg1 ;
-(void)setPresentedAlertController:(UIAlertController *)arg1 ;
-(UIViewController *)presentingController;
-(UIAlertController *)presentedAlertController;
-(void)handleWifiPowerChanged;
-(void)setBluetoothPowered:(BOOL)arg1 ;
-(void)handleBluetoothPowerChanged:(id)arg1 ;
-(void)setWiFiPowered:(BOOL)arg1 ;
-(void)_teardownWiFi;
-(void)_setupWiFi;
-(BOOL)shouldPromptBluetoothPower;
-(BOOL)needsPresentationConsideration;
-(void)setNeedsPresentationConsideration:(BOOL)arg1 ;
-(BOOL)updateRadiosAvailabilityAlertPresentation;
-(BOOL)shouldPromptWiFiPower;
-(id)init;
-(void)dealloc;
@end

