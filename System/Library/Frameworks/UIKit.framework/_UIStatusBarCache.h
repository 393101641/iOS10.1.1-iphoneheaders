/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPBitmapStore;

@interface _UIStatusBarCache : NSObject {

	CPBitmapStore* _store;
	BOOL _writeable;

}

@property (getter=isWriteable,nonatomic,readonly) BOOL writeable;              //@synthesize writeable=_writeable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isWriteable;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
@end

