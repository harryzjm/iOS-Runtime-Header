//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMWhiteBalanceCommand
{
    _Bool __matchExposureMode;
    long long __whiteBalanceMode;
}

@property(readonly, nonatomic) long long _whiteBalanceMode; // @synthesize _whiteBalanceMode=__whiteBalanceMode;
@property(readonly, nonatomic) _Bool _matchExposureMode; // @synthesize _matchExposureMode=__matchExposureMode;
- (id)_descriptionForWhiteBalanceMode:(long long)arg1;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchExposureMode;
- (id)initWithWhiteBalanceMode:(long long)arg1;

@end

