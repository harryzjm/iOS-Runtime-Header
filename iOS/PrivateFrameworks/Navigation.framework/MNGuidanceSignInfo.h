//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class MNGuidanceSignDescription;

@interface MNGuidanceSignInfo : NSObject <NSSecureCoding>
{
    MNGuidanceSignDescription *_primarySign;
    MNGuidanceSignDescription *_secondarySign;
    double _primaryDistance_SIRI_USE_ONLY;
    double _secondaryDistance_SIRI_USE_ONLY;
    double _timeUntilPrimarySign_SIRI_USE_ONLY;
    double _timeUntilSecondarySign_SIRI_USE_ONLY;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timeUntilSecondarySign_SIRI_USE_ONLY; // @synthesize timeUntilSecondarySign_SIRI_USE_ONLY=_timeUntilSecondarySign_SIRI_USE_ONLY;
@property(readonly, nonatomic) double timeUntilPrimarySign_SIRI_USE_ONLY; // @synthesize timeUntilPrimarySign_SIRI_USE_ONLY=_timeUntilPrimarySign_SIRI_USE_ONLY;
@property(readonly, nonatomic) double secondaryDistance_SIRI_USE_ONLY; // @synthesize secondaryDistance_SIRI_USE_ONLY=_secondaryDistance_SIRI_USE_ONLY;
@property(readonly, nonatomic) double primaryDistance_SIRI_USE_ONLY; // @synthesize primaryDistance_SIRI_USE_ONLY=_primaryDistance_SIRI_USE_ONLY;
@property(readonly, nonatomic) MNGuidanceSignDescription *secondarySign; // @synthesize secondarySign=_secondarySign;
@property(readonly, nonatomic) MNGuidanceSignDescription *primarySign; // @synthesize primarySign=_primarySign;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithPrimarySign:(id)arg1 secondarySign:(id)arg2 primaryDistance:(double)arg3 secondaryDistance:(double)arg4 timeUntilPrimarySign:(double)arg5 timeUntilSecondarySign:(double)arg6;

@end
