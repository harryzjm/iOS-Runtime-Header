//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/CLSTimeLocationTuple-Protocol.h>

@class NSArray, NSDate, NSString, PGGraphAddressNode;

@interface PGConsolidatedAddress : NSObject <CLSTimeLocationTuple>
{
    PGGraphAddressNode *_addressNode;
    NSArray *_addressEdgesSortedByTime;
    NSDate *_startDate;
    double _duration;
    NSDate *_expandedStartDate;
    NSDate *_expandedEndDate;
    NSString *_timeLocationIdentifier;
    struct CLLocationCoordinate2D _centerCoordinates;
}

@property(readonly, nonatomic) NSString *timeLocationIdentifier; // @synthesize timeLocationIdentifier=_timeLocationIdentifier;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinates; // @synthesize centerCoordinates=_centerCoordinates;
@property(readonly, nonatomic) NSArray *addressEdgesSortedByTime; // @synthesize addressEdgesSortedByTime=_addressEdgesSortedByTime;
@property(readonly, nonatomic) PGGraphAddressNode *addressNode; // @synthesize addressNode=_addressNode;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expandedEndDate; // @synthesize expandedEndDate=_expandedEndDate;
@property(readonly, nonatomic) NSDate *expandedStartDate; // @synthesize expandedStartDate=_expandedStartDate;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinates;
- (id)initWithAddressNode:(id)arg1 addressEdgesSortedByTime:(id)arg2 centerCoordinates:(struct CLLocationCoordinate2D)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

