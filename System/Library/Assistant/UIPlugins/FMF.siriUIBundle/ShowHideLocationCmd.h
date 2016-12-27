/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd {

	BOOL hideLocation;
	CLLocation* currentLocation;

}

@property (assign,nonatomic) BOOL hideLocation; 
@property (nonatomic,copy) CLLocation * currentLocation; 
-(void)setHideLocation:(BOOL)arg1 ;
-(BOOL)hideLocation;
-(id)currentLocationDictionary;
-(id)path;
-(id)result;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(id)jsonBodyDictionary;
@end
