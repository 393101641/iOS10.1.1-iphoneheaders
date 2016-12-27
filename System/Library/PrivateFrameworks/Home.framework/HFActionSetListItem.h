/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, HMRoom;

@interface HFActionSetListItem : HFItem {

	BOOL _onlyShowsFavorites;
	HMHome* _home;
	HMRoom* _room;

}

@property (nonatomic,readonly) HMHome * home;                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMRoom * room;                      //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;              //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
-(id)init;
-(HMHome *)home;
-(HMRoom *)room;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
@end
