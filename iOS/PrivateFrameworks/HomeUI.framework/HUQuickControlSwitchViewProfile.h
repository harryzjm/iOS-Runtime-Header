//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUQuickControlIncrementalConvertibleProfile-Protocol.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlSwitchViewProfile <HUQuickControlIncrementalConvertibleProfile>
{
}

@property(readonly, nonatomic) _Bool hasSecondaryValue;
- (_Bool)supportsTouchContinuation;
- (double)gestureDragCoefficient;
@property(readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property(readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
