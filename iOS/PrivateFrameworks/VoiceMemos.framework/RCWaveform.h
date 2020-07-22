//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCoding-Protocol.h>
#import <VoiceMemos/NSCopying-Protocol.h>
#import <VoiceMemos/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface RCWaveform : NSObject <NSMutableCopying, NSCopying, NSCoding>
{
    NSMutableArray *_segments;
    unsigned long long _decodedVersion;
}

+ (id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2;
+ (id)waveformURLForAVURL:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (void)_mergeBoundarySegmentsInArray:(id)arg1;
- (id)_mutableSegmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1 intersectionRange:(struct _NSRange *)arg2;
- (id)_mutableSegmentsByClippingToTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)rangeOfSegmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)segmentsByClippingToTimeRange:(CDStruct_73a5d3ca)arg1;
- (_Bool)saveContentsToURL:(id)arg1;
@property(readonly, nonatomic) unsigned long long averagePowerLevelsRate;
- (_Bool)isWaveformDataEqualToDataInWaveform:(id)arg1;
- (_Bool)hasUniformPowerLevel:(float)arg1;
- (id)initWithSegments:(id)arg1;
- (id)init;

@end
