/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtrasElementViewController.h>

@class IKViewElement;

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController {

	BOOL _embedded;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                       //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) BOOL matchParentHeight; 
@property (assign,nonatomic) BOOL embedded;                                     //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) id preferredLayoutGuide; 
@property (nonatomic,readonly) long long preferredLayoutAttribute; 
-(void)viewDidLoad;
-(void)setEmbedded:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)matchParentHeight;
-(id)preferredLayoutGuide;
-(long long)preferredLayoutAttribute;
-(BOOL)embedded;
@end

