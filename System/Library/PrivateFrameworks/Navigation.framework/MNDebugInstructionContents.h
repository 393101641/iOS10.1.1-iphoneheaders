/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNInstructionContents.h>

@class NSString, MNSpokenInstructionContents, NSArray;

@interface MNDebugInstructionContents : NSObject <MNInstructionContents> {

	MNSpokenInstructionContents* _contents;

}

@property (assign,nonatomic) long long context; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) int maneuverType; 
@property (assign,nonatomic) BOOL toFreeway; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,retain) NSString * intersectionName; 
@property (nonatomic,retain) NSString * exitNumber; 
@property (nonatomic,retain) NSString * destinationName; 
@property (nonatomic,retain) NSArray * branchNames; 
@property (nonatomic,retain) NSArray * towardNames; 
@property (assign,nonatomic) int junctionAngle; 
@property (assign,nonatomic) BOOL suppressNames; 
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback; 
-(id)init;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)instruction;
-(NSString *)destinationName;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(BOOL)toFreeway;
-(void)setToFreeway:(BOOL)arg1 ;
-(NSString *)exitNumber;
-(void)setExitNumber:(NSString *)arg1 ;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(id)stringForDistance:(double)arg1 ;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(BOOL)suppressNames;
-(void)setSuppressNames:(BOOL)arg1 ;
-(BOOL)hasServerContent;
-(BOOL)suppressFallback;
-(void)setSuppressFallback:(BOOL)arg1 ;
-(NSString *)intersectionName;
-(void)setIntersectionName:(NSString *)arg1 ;
-(NSArray *)branchNames;
-(void)setBranchNames:(NSArray *)arg1 ;
-(NSArray *)towardNames;
-(void)setTowardNames:(NSArray *)arg1 ;
-(int)junctionAngle;
-(void)setJunctionAngle:(int)arg1 ;
@end

