/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AirTrafficHost : NSObject {

	NSDictionary* _hostDict;

}

@property (getter=libraryIdentifier,nonatomic,readonly) NSString * libraryIdentifier; 
@property (getter=lastSyncTime,nonatomic,readonly) NSNumber * lastSyncTime; 
@property (getter=hostName,nonatomic,readonly) NSString * name; 
@property (getter=syncedAssetsString,nonatomic,readonly) NSString * syncedAssetsString; 
@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled; 
-(id)initWithHostDictionary:(id)arg1 ;
-(id)localizedAssetTypeForDataclass:(id)arg1 ;
-(NSString *)syncedAssetsString;
-(id)hostName;
-(NSString *)libraryIdentifier;
-(BOOL)isWifiEnabled;
-(NSNumber *)lastSyncTime;
@end

