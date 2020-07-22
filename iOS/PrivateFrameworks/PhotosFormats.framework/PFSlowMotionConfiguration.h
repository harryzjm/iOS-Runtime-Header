//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject
{
    float _volumeDuringSlowMotion;
    float _volumeDuringRampToSlowMotion;
    PFSlowMotionRampConfiguration *_rampDown;
    PFSlowMotionRampConfiguration *_rampUp;
}

@property(readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampUp; // @synthesize rampUp=_rampUp;
@property(readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampDown; // @synthesize rampDown=_rampDown;
@property(readonly, nonatomic) float volumeDuringRampToSlowMotion; // @synthesize volumeDuringRampToSlowMotion=_volumeDuringRampToSlowMotion;
@property(readonly, nonatomic) float volumeDuringSlowMotion; // @synthesize volumeDuringSlowMotion=_volumeDuringSlowMotion;
- (void).cxx_destruct;
- (id)init;

@end
