/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDGLLayerContext.h>

@protocol TSDGLLayerContext <NSObject>
@optional
-(void)lock;
-(void)unlock;

@required
-(BOOL)createFramebufferFromLayer:(id)arg1;
-(void)presentRenderbuffer;
-(BOOL)isValid;
-(void)teardown;
-(BOOL)makeCurrentContext;

@end


@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {

	EAGLContext* mContext;
	unsigned mRenderbuffer;
	unsigned mFramebuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)createFramebufferFromLayer:(id)arg1 ;
-(void)presentRenderbuffer;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(void)teardown;
-(BOOL)makeCurrentContext;
@end
