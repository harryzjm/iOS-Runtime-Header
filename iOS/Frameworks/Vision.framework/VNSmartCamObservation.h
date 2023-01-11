//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface VNSmartCamObservation
{
    NSArray *_smartCamprints;
    NSString *_smartCamprintVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)smartCamprintCurrentVersion;
+ (id)observationWithSmartCamprints:(id)arg1;
@property(readonly, copy, nonatomic) NSString *smartCamprintVersion; // @synthesize smartCamprintVersion=_smartCamprintVersion;
@property(copy, nonatomic) NSArray *smartCamprints; // @synthesize smartCamprints=_smartCamprints;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2;

@end

