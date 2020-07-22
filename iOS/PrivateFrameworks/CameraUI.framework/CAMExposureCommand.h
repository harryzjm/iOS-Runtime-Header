//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMExposureCommand
{
    long long __exposureMode;
    struct CGPoint __exposurePointOfInterest;
}

@property(readonly, nonatomic) struct CGPoint _exposurePointOfInterest; // @synthesize _exposurePointOfInterest=__exposurePointOfInterest;
@property(readonly, nonatomic) long long _exposureMode; // @synthesize _exposureMode=__exposureMode;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExposureMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2;
- (id)initWithExposureMode:(long long)arg1;

@end

