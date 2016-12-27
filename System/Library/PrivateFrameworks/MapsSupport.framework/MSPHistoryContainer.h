/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet, MSPQuerySource, MSPHistoryRAPStorage;

@interface MSPHistoryContainer : MSPContainer {

	NSMutableSet* _dependents;

}

@property (nonatomic,readonly) MSPQuerySource * userVisibleRecentItemsQuerySource; 
@property (nonatomic,readonly) MSPQuerySource * userVisibleContentsQuerySource; 
@property (nonatomic,readonly) MSPHistoryRAPStorage * directionsRecordingStorage; 
@property (nonatomic,readonly) MSPHistoryRAPStorage * searchRecordingStorage; 
+(id)defaultContainer;
-(MSPQuerySource *)userVisibleRecentItemsQuerySource;
-(id)initWithMapsPaths:(id)arg1 ;
-(MSPQuerySource *)userVisibleContentsQuerySource;
-(MSPHistoryRAPStorage *)directionsRecordingStorage;
-(MSPHistoryRAPStorage *)searchRecordingStorage;
-(void)fetchEntryForIdentifier:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertOrUpdateNewEntryFromEntry:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateExistingEntryFromEntry:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeEntryWithIdentifier:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)addDependent:(id)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
