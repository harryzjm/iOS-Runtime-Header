//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TRIClient, TRITrackingId;

@interface PPTrialWrapperGuardedData : NSObject
{
    TRIClient *trialClient;
    TRITrackingId *trackingId;
    NSMutableArray *notificationTokens;
    NSMutableDictionary *pathOverrides;
    NSMutableDictionary *treatmentNames;
    NSMutableDictionary *availableFactors;
}

- (void).cxx_destruct;

@end
