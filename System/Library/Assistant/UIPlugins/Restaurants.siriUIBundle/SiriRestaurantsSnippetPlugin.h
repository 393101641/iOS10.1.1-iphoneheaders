/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AcousticId/SiriUISnippetPlugin.h>

@class SiriRestaurantsLogoManager, NSString;

@interface SiriRestaurantsSnippetPlugin : NSObject <SiriUISnippetPlugin> {

	SiriRestaurantsLogoManager* _logoManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_viewControllerForNavPathInSnippet:(id)arg1 ;
-(id)_logoManager;
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2 ;
@end
