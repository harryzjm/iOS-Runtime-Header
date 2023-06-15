//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCurrentCountryCodeProvider-Protocol.h>

@class HKRegulatoryDomainEstimate;

@protocol HKRegulatoryDomainProvider <HKCurrentCountryCodeProvider>
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(void (^)(id <HKCurrentCountryCode>, NSError *))arg1;
- (HKRegulatoryDomainEstimate *)currentEstimate;
@end

