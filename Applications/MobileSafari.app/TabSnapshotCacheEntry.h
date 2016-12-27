/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface TabSnapshotCacheEntry : NSObject {

	BOOL _updatingState;
	BOOL _stateUpdateCancelled;
	UIImage* _snapshot;
	long long _state;
	unsigned long long _decodedSize;

}

@property (nonatomic,retain) UIImage * snapshot;                                     //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) long long state;                                        //@synthesize state=_state - In the implementation block
@property (assign,getter=isUpdatingState,nonatomic) BOOL updatingState;              //@synthesize updatingState=_updatingState - In the implementation block
@property (assign,nonatomic) BOOL stateUpdateCancelled;                              //@synthesize stateUpdateCancelled=_stateUpdateCancelled - In the implementation block
@property (assign,nonatomic) unsigned long long decodedSize;                         //@synthesize decodedSize=_decodedSize - In the implementation block
-(BOOL)isUpdatingState;
-(void)setUpdatingState:(BOOL)arg1 ;
-(BOOL)stateUpdateCancelled;
-(void)setStateUpdateCancelled:(BOOL)arg1 ;
-(unsigned long long)decodedSize;
-(void)setDecodedSize:(unsigned long long)arg1 ;
-(id)init;
-(id)debugDescription;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UIImage *)snapshot;
-(void)setSnapshot:(UIImage *)arg1 ;
@end
