/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {

	CUIPSDLayerGroupRef* _layerGroup;
	unsigned _currentIndex;
	BOOL _isImageFile;

}
+(id)enumeratorWithPSDLayerGroup:(id)arg1 ;
+(id)enumeratorWithPSDImage:(id)arg1 ;
-(id)initWithPSDLayerGroup:(id)arg1 ;
-(id)initWithPSDImage:(id)arg1 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
@end
