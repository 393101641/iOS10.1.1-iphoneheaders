/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PEXPeopleSuggester, PEXDiscoverySuggester, PEXAutocompleteDelegate;

@interface PEXContactScorer : NSObject {

	PEXPeopleSuggester* _peopleSuggester;
	PEXDiscoverySuggester* _discoverySuggester;
	PEXAutocompleteDelegate* _autocompleteDelegate;
	id _cnObserverToken;

}
+(id)sharedInstance;
+(id)createNewSharedScorer;
-(id)init;
-(void)dealloc;
-(void)discoveredEvents:(id)arg1 ;
-(void)discoveredRecipients:(id)arg1 ;
-(void)waitForDiscoveriesToProcess;
-(id)contactsForDetailString:(id)arg1 ;
-(void)waitForScoringData;
-(double)scoreForContactIdentifier:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3 ;
-(double)scoreForFoundOnDeviceContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3 ;
-(id)contactsForNamePrefix:(id)arg1 recipients:(id)arg2 ;
-(double)scoreForContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3 ;
-(double)scoreMergedNameItem:(id)arg1 ;
-(id)_contactsFromSuggester:(id)arg1 matchingPrefix:(id)arg2 ;
-(double)scoreFromRankPercentage:(double)arg1 acBoost:(double)arg2 ;
@end

