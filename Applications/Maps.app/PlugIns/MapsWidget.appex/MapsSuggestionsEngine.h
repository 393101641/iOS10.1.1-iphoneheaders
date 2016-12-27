/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class MapsSuggestionsFakeSource, MapsSuggestionsRoutineSource, MapsSuggestionsTestAllLocationsOfInterestSource, MapsSuggestionsReservationsSource, MapsSuggestionsAppConnectionSource, MapsSuggestionsRidesharingSource, MapsSuggestionsCarPlaySource, MapsSuggestionsReInjectSource, MapsSuggestionsManager, NSObject, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject> {

	MapsSuggestionsFakeSource* _fakeSource;
	MapsSuggestionsRoutineSource* _routineSource;
	MapsSuggestionsTestAllLocationsOfInterestSource* _routineLocationOfInterestSource;
	MapsSuggestionsReservationsSource* _reservationsSource;
	MapsSuggestionsAppConnectionSource* _appConnectionSource;
	MapsSuggestionsRidesharingSource* _ridesharingSource;
	MapsSuggestionsCarPlaySource* _carPlaySource;
	MapsSuggestionsReInjectSource* _reInjectSource;
	MapsSuggestionsManager* _manager;
	long long _managerStyle;
	NSObject*<OS_dispatch_queue> _optionsSerialQueue;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (assign,nonatomic) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)defaultCachePath;
+(id)simpleStrategy;
+(void)load;
+(id)defaultEngine;
-(BOOL)attachSink:(id)arg1 ;
-(BOOL)detachSink:(id)arg1 ;
-(BOOL)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(unsigned long long)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)addAdditionalFilter:(id)arg1 ;
-(void)removeAdditionalFilter:(id)arg1 ;
-(BOOL)saveStorageToFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(NSArray*)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(unsigned long long)arg3 ;
-(NSArray*)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(unsigned long long)arg4 ;
-(void)hintRefreshOfType:(unsigned char)arg1 ;
-(id)fakeSource;
-(void)startDemoMode;
-(id)init;
-(void)reset;
-(NSString *)uniqueName;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id)currentLocation;
-(id)strategy;
-(id)manager;
@end
