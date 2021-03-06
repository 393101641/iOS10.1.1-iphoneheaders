/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <iaptransportd/CRCarPlayPreferencesDelegate.h>

@class CRCarPlayPreferences, NSString;

@interface IAPCarPlayConnectionObserver : NSObject <CRCarPlayPreferencesDelegate> {

	BOOL _isStarkPossibleByCarPlaySettings;
	CRCarPlayPreferences* _carPreferences;
	CIapPortIOKit* _parentUSBPort;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPort:(CIapPortIOKit*)arg1 ;
-(void)handleCarPlayAllowedDidChange;
@end

