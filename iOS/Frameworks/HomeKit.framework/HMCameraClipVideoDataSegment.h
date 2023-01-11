//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMCameraClipVideoDataSegment
{
    double _duration;
    double _timeOffset;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly) double duration; // @synthesize duration=_duration;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithByteLength:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 duration:(double)arg3 timeOffset:(double)arg4;

@end
