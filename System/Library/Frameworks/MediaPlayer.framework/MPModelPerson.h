/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelPerson : MPModelObject {

	BOOL _hasSocialPosts;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasSocialPosts;              //@synthesize hasSocialPosts=_hasSocialPosts - In the implementation block
+(id)__name__KEY;
+(id)__MPModelPropertyPersonName__PROPERTY;
+(id)__hasSocialPosts__KEY;
+(id)__MPModelPropertyPersonHasSocialPosts__PROPERTY;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)descriptionWithType:(long long)arg1 ;
-(BOOL)hasSocialPosts;
-(void)setHasSocialPosts:(BOOL)arg1 ;
@end
