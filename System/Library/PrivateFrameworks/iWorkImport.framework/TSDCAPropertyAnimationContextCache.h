/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDCAAnimationContextCache.h>

@class NSString;

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache {

	BOOL _isAnimationKeyTypeOfRotation;
	BOOL _isAnimationKeyHidden;
	BOOL _isAnimationKeyDoubleSided;
	NSString* _keyPath;

}

@property (nonatomic,readonly) NSString * keyPath;                             //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL isAnimationKeyTypeOfRotation;              //@synthesize isAnimationKeyTypeOfRotation=_isAnimationKeyTypeOfRotation - In the implementation block
@property (nonatomic,readonly) BOOL isAnimationKeyHidden;                      //@synthesize isAnimationKeyHidden=_isAnimationKeyHidden - In the implementation block
@property (nonatomic,readonly) BOOL isAnimationKeyDoubleSided;                 //@synthesize isAnimationKeyDoubleSided=_isAnimationKeyDoubleSided - In the implementation block
-(id)initWithAnimation:(id)arg1 ;
-(void)verifyCacheWithAnimation:(id)arg1 ;
-(BOOL)isAnimationKeyTypeOfRotation;
-(BOOL)isAnimationKeyHidden;
-(BOOL)isAnimationKeyDoubleSided;
-(NSString *)keyPath;
@end
