//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CTCarrierSpaceUsageAccountMetrics, CTCarrierSpaceUsagePlanMetrics, NSMutableArray, NSString;

@interface PSUICarrierSpaceUsageSection : NSObject
{
    NSString *_sharedPlanIdentifier;
    CTCarrierSpaceUsagePlanMetrics *_primaryMetrics;
    CTCarrierSpaceUsageAccountMetrics *_accountMetrics;
    NSMutableArray *_otherMetrics;
    NSMutableArray *_barCategories;
}

@property(retain) NSMutableArray *barCategories; // @synthesize barCategories=_barCategories;
@property(retain) NSMutableArray *otherMetrics; // @synthesize otherMetrics=_otherMetrics;
@property(retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics; // @synthesize accountMetrics=_accountMetrics;
@property(retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics; // @synthesize primaryMetrics=_primaryMetrics;
@property(retain) NSString *sharedPlanIdentifier; // @synthesize sharedPlanIdentifier=_sharedPlanIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isSharedPlan;

@end

