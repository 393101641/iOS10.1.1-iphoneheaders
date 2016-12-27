/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/PageLoadTestRunner.h>

@class NSMutableDictionary, NSString;

@interface PurplePageLoadTestRunner : PageLoadTestRunner {

	NSMutableDictionary* _pptResults;
	BOOL _showLoadTime;
	BOOL _showFirstVisualLayoutTime;
	BOOL _showRenderTime;
	BOOL _showRenderFps;
	NSString* _testName;

}

@property (nonatomic,copy) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) BOOL showLoadTime;                           //@synthesize showLoadTime=_showLoadTime - In the implementation block
@property (assign,nonatomic) BOOL showFirstVisualLayoutTime;              //@synthesize showFirstVisualLayoutTime=_showFirstVisualLayoutTime - In the implementation block
@property (assign,nonatomic) BOOL showRenderTime;                         //@synthesize showRenderTime=_showRenderTime - In the implementation block
@property (assign,nonatomic) BOOL showRenderFps;                          //@synthesize showRenderFps=_showRenderFps - In the implementation block
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(id)initRenderTestWithName:(id)arg1 browserController:(id)arg2 showRenderTime:(BOOL)arg3 showFPS:(BOOL)arg4 ;
-(void)finishedTestRunner;
-(void)startingTestRunner;
-(void)collectPPTResults;
-(void)pptResultFor:(id)arg1 measure:(id)arg2 value:(double)arg3 units:(id)arg4 ;
-(void)pptResultFor:(id)arg1 measure:(id)arg2 time:(double)arg3 ;
-(BOOL)showLoadTime;
-(void)setShowLoadTime:(BOOL)arg1 ;
-(BOOL)showFirstVisualLayoutTime;
-(void)setShowFirstVisualLayoutTime:(BOOL)arg1 ;
-(BOOL)showRenderTime;
-(void)setShowRenderTime:(BOOL)arg1 ;
-(BOOL)showRenderFps;
-(void)setShowRenderFps:(BOOL)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(NSString *)testName;
@end
