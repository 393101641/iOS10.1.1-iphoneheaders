/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {

	UIImage* _pretiledImage;
	_UIImageViewPretiledImageCacheKey* _cacheKey;

}

@property (nonatomic,readonly) UIImage * pretiledImage;              //@synthesize pretiledImage=_pretiledImage - In the implementation block
+(id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UIImage *)pretiledImage;
@end

