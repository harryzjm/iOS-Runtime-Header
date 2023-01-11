//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDStatisticsCollectionCalculatorSourceOrderProvider-Protocol.h>

@class HDProfile, HKQuantityType, NSString;

@interface HDStatisticsCollectionCalculatorDefaultSourceOrderProvider : NSObject <HDStatisticsCollectionCalculatorSourceOrderProvider>
{
    HDProfile *_profile;
    HKQuantityType *_quantityType;
}

@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)orderedSourceIDsWithUnorderedIDs:(id)arg1;
- (id)sourceForSourceID:(long long)arg1;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

