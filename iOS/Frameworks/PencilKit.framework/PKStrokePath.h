//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class NSDate, NSUUID;

@interface PKStrokePath : NSObject <NSCopying>
{
    struct PKStrokePathPointsPrivate _strokeDataPointsPrivate;
    struct shared_ptr<PKProtobufUnknownFields> _unknownFields;
    _Bool _didValidateTimestamps;
    _Bool _hasValidTimestampData;
    unsigned long long _immutablePointsCount;
    unsigned long long _startIndex;
    long long _inputType;
    NSUUID *_strokeDataUUID;
}

+ (void)_calculateOffsets:(unsigned long long *)arg1 sizes:(unsigned long long *)arg2;
+ (void)calculateOffsets;
+ (id)strokeDataFromDataArchive:(const struct StrokeData *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *_strokeDataUUID; // @synthesize _strokeDataUUID;
@property(readonly, nonatomic) long long _inputType; // @synthesize _inputType;
@property(readonly, nonatomic) unsigned long long _startIndex; // @synthesize _startIndex;
@property(readonly, nonatomic) unsigned long long _immutablePointsCount; // @synthesize _immutablePointsCount;
- (void)enumerateInterpolatedPointsInRange:(id)arg1 strideByParametricStep:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateInterpolatedPointsInRange:(id)arg1 strideByTime:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateInterpolatedPointsInRange:(id)arg1 strideByDistance:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateInterpolatedPointsInRange:(id)arg1 incrementBlock:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (double)parametricValue:(double)arg1 offsetByTime:(double)arg2;
- (double)parametricValue:(double)arg1 offsetByDistance:(double)arg2;
- (struct CGPoint)locationOnSegment:(unsigned long long)arg1 t:(double)arg2;
- (struct _PKStrokePoint)decompressedPointAt:(unsigned long long)arg1;
- (id)interpolatedPointAt:(double)arg1;
- (double)interpolatedTimeoffsetAt:(double)arg1;
- (struct CGPoint)interpolatedLocationAt:(double)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)pointAtIndex:(unsigned long long)arg1;
- (struct PKCompressedStrokePoint)_compressedPointAt:(unsigned long long)arg1;
- (const struct CGPath *)_newPathRepresentation;
- (double)radiusAtIndex:(unsigned long long)arg1;
- (double)timestampAtIndex:(unsigned long long)arg1;
- (void)setLocation:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;
- (struct CGPoint)locationAtIndex:(unsigned long long)arg1;
- (void)setPointsFrom:(id)arg1 range:(struct _NSRange)arg2;
- (void)setPoints:(struct PKCompressedStrokePoint *)arg1 pointsCount:(unsigned long long)arg2 timestamp:(double)arg3;
- (_Bool)inflight;
@property(readonly, nonatomic) _Bool hasValidPointTimestampData;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) double _timestamp;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long _pointsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2 UUID:(id)arg3;
- (id)initWithControlPoints:(id)arg1 creationDate:(id)arg2;
- (id)initWithPoints:(struct PKCompressedStrokePoint *)arg1 count:(unsigned long long)arg2 immutableCount:(unsigned long long)arg3 inputType:(long long)arg4 timestamp:(double)arg5 UUID:(id)arg6;
- (id)init;
- (id)dataApplying:(id)arg1;
- (id)deltaTo:(id)arg1;
- (void)readStrokeDataFromArchive:(const struct StrokeData *)arg1;
- (_Bool)saveToDataArchive:(struct StrokeData *)arg1;

@end
