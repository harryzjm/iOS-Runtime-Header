//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HKSPSleepFocusModeBridge;

__attribute__((visibility("hidden")))
@interface HDSPAppPredictionClient : NSObject
{
    id <HKSPSleepFocusModeBridge> _sleepFocusModeBridge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HKSPSleepFocusModeBridge> sleepFocusModeBridge; // @synthesize sleepFocusModeBridge=_sleepFocusModeBridge;
- (void)createSuggestedHomeScreenPageWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSleepFocusModeBridge:(id)arg1;

@end

