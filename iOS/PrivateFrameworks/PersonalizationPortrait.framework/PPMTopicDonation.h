//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMTopicDonation : NSObject
{
    PETDistributionEventTracker *_tracker;
}

@property(readonly, nonatomic) PETDistributionEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMTopicDonationSource_)arg2;
- (id)init;

@end

