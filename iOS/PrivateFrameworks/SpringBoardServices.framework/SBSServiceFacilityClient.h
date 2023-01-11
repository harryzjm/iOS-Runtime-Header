//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSServiceFacilityClient
{
    long long _numberOfCheckOuts;
}

+ (id)serviceFacilityIdentifier;
+ (void)checkInClient:(id)arg1;
+ (id)checkOutClientWithClass:(Class)arg1;
- (_Bool)_decrementCheckout;
- (void)_incrementCheckout;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (id)initWithCalloutQueue:(id)arg1;

@end
