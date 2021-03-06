/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDWrapSegments : NSObject {

	vector<TSDWrapSegment, std::__1::allocator<TSDWrapSegment> >* mSegments;
	CGRect mBounds;

}
+(id)wrapSegmentsWithPath:(id)arg1 ;
-(void)p_buildSegmentsForPath:(id)arg1 ;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(const SCD_Struct_TS548*)segments;
-(long long)segmentCount;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
@end

