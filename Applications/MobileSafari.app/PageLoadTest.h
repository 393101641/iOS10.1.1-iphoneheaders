/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TabDocument, NSArray, _WKRemoteObjectInterface;

@interface PageLoadTest : NSObject {

	TabDocument* _tabDocument;
	NSArray* _pagesNeedingMemoryWarningSent;
	_WKRemoteObjectInterface* _eventsListenerInterface;

}
-(id)initWithTabDocument:(id)arg1 ;
-(id)initWithTabDocument:(id)arg1 pagesNeedingMemoryWarningSent:(id)arg2 ;
-(void)_setUpWebProcessForPageLoadMeasurementCollection;
-(void)_invalidateRemoteObjects;
-(void)_setUpPageLoadTestEventsListener;
-(void)_enablePageLoadMeasurementCollection;
-(void)didFinishPageLoadWithLoadData:(id)arg1 ;
-(void)resetAfterWebProcessCrash;
-(void)dealloc;
@end
