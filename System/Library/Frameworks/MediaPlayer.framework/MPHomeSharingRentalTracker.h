/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject {

	NSObject*<OS_dispatch_queue> _rentalTrackerQueue;
	NSMutableDictionary* _rentals;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)removeAllRentalsForDatabaseID:(id)arg1 ;
-(void)_saveRentals;
-(void)removeRentalWithItemID:(unsigned long long)arg1 ;
-(void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2 ;
@end

