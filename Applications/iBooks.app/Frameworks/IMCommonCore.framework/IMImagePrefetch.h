/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMImagePrefetch <NSObject>
@required
-(BOOL)isPrefetchCancelled;
-(id)initWithData:(id)arg1 optimalSize:(CGSize)arg2;
-(CGImageRef)cachedImageIfAvailable;
-(void)cancelPrefetchRequest;
-(void)addImageHandler:(/*^block*/id)arg1 queue:(id)arg2;
-(CGImageRef)cachedImage;
-(void)loadData:(id)arg1;

@end
