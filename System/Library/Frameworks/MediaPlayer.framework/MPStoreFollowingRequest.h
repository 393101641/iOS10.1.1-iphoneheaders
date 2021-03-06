/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@interface MPStoreFollowingRequest : MPModelRequest
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemClass:(Class)arg1 ;
-(void)setSectionClass:(Class)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(Class)itemClass;
-(Class)sectionClass;
-(void)setSectionProperties:(id)arg1 ;
-(void)setItemProperties:(id)arg1 ;
-(void)setAllowsDeferringExpensiveProperties:(BOOL)arg1 ;
-(void)setSectionSortDescriptors:(id)arg1 ;
-(void)setItemSortDescriptors:(id)arg1 ;
@end

