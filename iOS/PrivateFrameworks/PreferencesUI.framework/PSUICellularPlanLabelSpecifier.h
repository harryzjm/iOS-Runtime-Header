//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelSpecifier : PSSpecifier
{
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICellularPlanUniversalReference *_planReference;
}

@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
- (void).cxx_destruct;
- (id)cellularPlanLabel:(id)arg1;
- (void)updateValuesAndTitles;
- (id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2;

@end

