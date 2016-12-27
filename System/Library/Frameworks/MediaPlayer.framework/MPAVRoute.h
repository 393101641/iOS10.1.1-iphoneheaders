/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, MPAVBatteryLevel, NSArray;

@interface MPAVRoute : NSObject {

	NSString* _routeName;
	BOOL _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	long long _displayRouteType;
	BOOL _pickedOnPairedDevice;
	BOOL _playingOnPairedDevice;
	BOOL _requiresPassword;
	NSString* _routeUID;
	long long _routeType;
	long long _pickableRouteType;
	long long _routeSubtype;
	MPAVBatteryLevel* _batteryLevel;
	NSArray* _auxiliaryDevices;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,readonly) NSString * routeUID;                                                    //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) long long routeType;                                                    //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long pickableRouteType;                                            //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;                                                 //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceRoute; 
@property (nonatomic,readonly) MPAVRoute * wirelessDisplayRoute; 
@property (nonatomic,readonly) MPAVBatteryLevel * batteryLevel;                                        //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) NSArray * auxiliaryDevices;                                             //@synthesize auxiliaryDevices=_auxiliaryDevices - In the implementation block
@property (getter=isPickedOnPairedDevice,nonatomic,readonly) BOOL pickedOnPairedDevice;                //@synthesize pickedOnPairedDevice=_pickedOnPairedDevice - In the implementation block
@property (getter=isPlayingOnPairedDevice,nonatomic,readonly) BOOL playingOnPairedDevice;              //@synthesize playingOnPairedDevice=_playingOnPairedDevice - In the implementation block
@property (getter=isPicked,nonatomic,readonly) BOOL picked; 
@property (nonatomic,readonly) BOOL requiresPassword;                                                  //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) long long passwordType; 
@property (nonatomic,readonly) BOOL displayIsPicked; 
@property (nonatomic,readonly) long long displayRouteType; 
@property (getter=isAirpodsRoute,nonatomic,readonly) BOOL airpodsRoute; 
@property (getter=isPowerbeatsRoute,nonatomic,readonly) BOOL powerbeatsRoute; 
@property (getter=isBeatsSoloRoute,nonatomic,readonly) BOOL beatsSoloRoute; 
@property (getter=isBeatsXRoute,nonatomic,readonly) BOOL beatsXRoute; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(MPAVBatteryLevel *)batteryLevel;
-(long long)routeType;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(MPAVRoute *)wirelessDisplayRoute;
-(BOOL)isPicked;
-(BOOL)isPickedOnPairedDevice;
-(NSArray *)auxiliaryDevices;
-(long long)routeSubtype;
-(BOOL)isAirpodsRoute;
-(BOOL)isPowerbeatsRoute;
-(BOOL)isBeatsSoloRoute;
-(BOOL)isBeatsXRoute;
-(BOOL)isDeviceRoute;
-(id)avRouteDescription;
-(long long)pickableRouteType;
-(NSString *)routeUID;
-(id)_initWithAVRouteDescription:(id)arg1 ;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)requiresPassword;
-(BOOL)displayIsPicked;
-(long long)passwordType;
-(void)_routingControllerPickedRouteNotification:(id)arg1 ;
-(id)_productIdentifier;
-(void)setAVRouteDescription:(id)arg1 ;
-(long long)displayRouteType;
-(void)setDisplayRouteType:(long long)arg1 ;
-(BOOL)isPlayingOnPairedDevice;
@end
