//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol CLSInvestigationItem;

@interface CLSOPTICSClusteringObject : NSObject
{
    unsigned long long _order;
    NSMutableArray *_neighbors;
    double _coreDistance;
    double _reachabilityDistance;
    _Bool _processed;
    id <CLSInvestigationItem> _object;
    unsigned long long _index;
}

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;
@property(nonatomic) _Bool processed; // @synthesize processed=_processed;
@property(nonatomic) double reachabilityDistance; // @synthesize reachabilityDistance=_reachabilityDistance;
@property(nonatomic) double coreDistance; // @synthesize coreDistance=_coreDistance;
@property(readonly, retain, nonatomic) NSArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) id <CLSInvestigationItem> object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)updateCoreDistanceForNeighbor:(unsigned long long)arg1;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (void)sortNeighborsByDistance;
- (void)registerNeighbors:(id)arg1 deleteExisting:(_Bool)arg2;
- (id)initWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;

@end
