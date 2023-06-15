//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthAppHealthDaemon/NSObject-Protocol.h>

@class HKSampleType, NSArray, NSNumber, NSSet;

@protocol HDDataObserver <NSObject>
- (void)samplesAdded:(NSArray *)arg1 anchor:(NSNumber *)arg2;

@optional
- (void)samplesOfTypesWereRemoved:(NSArray *)arg1 anchor:(NSNumber *)arg2;
- (void)samplesJournaled:(NSArray *)arg1 type:(HKSampleType *)arg2;
- (void)didAddSamplesOfTypes:(NSSet *)arg1 anchor:(NSNumber *)arg2;
@end

