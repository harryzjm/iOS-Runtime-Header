//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>
#import <Timeline/TLTimelineWindow-Protocol.h>

@class NSDate, NSString, TLTimelineEntryNode, TLTimelineSegment;

@interface TLTimelineWindow : NSObject <TLTimelineWindow, NSCopying, NSSecureCoding>
{
    TLTimelineEntryNode *_focalNode;
    TLTimelineSegment *_leftSegment;
    TLTimelineSegment *_rightSegment;
    unsigned long long _maxNodes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maxNodes; // @synthesize maxNodes=_maxNodes;
@property(readonly, nonatomic) TLTimelineSegment *rightSegment; // @synthesize rightSegment=_rightSegment;
@property(readonly, nonatomic) TLTimelineSegment *leftSegment; // @synthesize leftSegment=_leftSegment;
@property(readonly, nonatomic) TLTimelineEntryNode *focalNode; // @synthesize focalNode=_focalNode;
@property(readonly, nonatomic) unsigned long long rightEntryCount;
@property(readonly, nonatomic) unsigned long long leftEntryCount;
@property(readonly, nonatomic) NSDate *rightmostContiguousEntryDate;
@property(readonly, nonatomic) NSDate *leftmostContiguousEntryDate;
- (id)rightmostNode;
- (id)leftmostNode;
- (_Bool)containsNode:(id)arg1;
- (void)rebalance;
- (void)updateFocalNodeWithDate:(id)arg1;
- (id)initWithFocalNode:(id)arg1 leftSegment:(id)arg2 rightSegment:(id)arg3 maxNodes:(unsigned long long)arg4;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2 leftSegmentCount:(unsigned long long)arg3 rightSegmentCount:(unsigned long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
