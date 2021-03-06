/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MapsSuggestionsManager;


@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
@required
-(BOOL)shouldKeepEntry:(id)arg1;
-(NSArray*)topSuggestionsWithSourceEntries:(NSDictionary*)arg1 error:(id*)arg2;
-(void)removeFilter:(id)arg1;
-(void)removeAllFilters;
-(void)addImprover:(id)arg1;
-(void)removeAllImprovers;
-(void)addDeduper:(id)arg1;
-(void)removeAllDedupers;
-(void)addFilter:(id)arg1;
-(void)clearData;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(id)arg1;

@end

