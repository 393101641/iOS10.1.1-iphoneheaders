/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation, NSDate, NSString;

@interface GEORouteHypothesisOld : NSObject {

	GEOLocation* _lastLocation;
	NSDate* _suggestedDepartureDate;
	NSDate* _estimatedArrivalDate;
	unsigned long long _currentTrafficDensity;
	unsigned long long _historicTrafficDensity;
	BOOL _hasTrafficIncidentOnRoute;
	int _routeIncidentType;
	int _routeIncidentSignificance;
	NSString* _routeIncidentStreetName;
	unsigned long long _travelState;
	double _travelStateScore;

}

@property (nonatomic,retain) GEOLocation * lastLocation;                               //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedDepartureDate;                        //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (nonatomic,readonly) NSDate * estimatedArrivalDate;                          //@synthesize estimatedArrivalDate=_estimatedArrivalDate - In the implementation block
@property (nonatomic,readonly) unsigned long long currentTrafficDensity;               //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,readonly) unsigned long long historicTrafficDensity;              //@synthesize historicTrafficDensity=_historicTrafficDensity - In the implementation block
@property (nonatomic,readonly) BOOL hasTrafficIncidentOnRoute;                         //@synthesize hasTrafficIncidentOnRoute=_hasTrafficIncidentOnRoute - In the implementation block
@property (nonatomic,readonly) int routeIncidentType;                                  //@synthesize routeIncidentType=_routeIncidentType - In the implementation block
@property (nonatomic,readonly) int routeIncidentSignificance;                          //@synthesize routeIncidentSignificance=_routeIncidentSignificance - In the implementation block
@property (nonatomic,readonly) NSString * routeIncidentStreetName;                     //@synthesize routeIncidentStreetName=_routeIncidentStreetName - In the implementation block
@property (nonatomic,readonly) unsigned long long travelState;                         //@synthesize travelState=_travelState - In the implementation block
@property (nonatomic,readonly) double travelStateScore;                                //@synthesize travelStateScore=_travelStateScore - In the implementation block
-(void)dealloc;
-(id)description;
-(void)updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3 ;
-(void)updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)updateTrafficIncidents:(id)arg1 ;
-(void)updateTravelState:(id)arg1 ;
-(NSDate *)suggestedDepartureDate;
-(NSDate *)estimatedArrivalDate;
-(unsigned long long)currentTrafficDensity;
-(unsigned long long)historicTrafficDensity;
-(BOOL)hasTrafficIncidentOnRoute;
-(int)routeIncidentType;
-(int)routeIncidentSignificance;
-(NSString *)routeIncidentStreetName;
-(unsigned long long)travelState;
-(double)travelStateScore;
-(void)setLastLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)lastLocation;
@end
