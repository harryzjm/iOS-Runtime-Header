//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface CLSPublicEvent : NSObject
{
    NSString *_title;
    NSString *_description;
    NSString *_venue;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _eventType;
    NSArray *_performers;
    double _distance;
    unsigned long long _popularity;
    struct CLLocationCoordinate2D _location;
}

+ (id)stringByEventType:(unsigned long long)arg1;
+ (id)publicEventWithDictionary:(id)arg1 withLocationContext:(struct CLLocationCoordinate2D)arg2 andEventType:(unsigned long long)arg3;
@property(readonly) unsigned long long popularity; // @synthesize popularity=_popularity;
@property(readonly) double distance; // @synthesize distance=_distance;
@property(readonly) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(readonly) NSArray *performers; // @synthesize performers=_performers;
@property(readonly) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) NSString *venue; // @synthesize venue=_venue;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly) NSString *description; // @synthesize description=_description;
- (id)initWithDictionary:(id)arg1 withLocationContext:(struct CLLocationCoordinate2D)arg2 andEventType:(unsigned long long)arg3;

@end
