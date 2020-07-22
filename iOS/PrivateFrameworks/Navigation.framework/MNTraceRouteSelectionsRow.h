//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject
{
    double _startTimestamp;
    double _endTimestamp;
    NSData *_routeID;
    unsigned long long _selectedRouteIndex;
}

@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (void).cxx_destruct;

@end

