//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartHealth/HKQueryClientInterface-Protocol.h>

@class HKHRAFibBurdenHistogramResult, NSUUID;

@protocol HKHRAFibBurdenHistogramQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverHistogramResult:(HKHRAFibBurdenHistogramResult *)arg1 queryUUID:(NSUUID *)arg2;
@end

