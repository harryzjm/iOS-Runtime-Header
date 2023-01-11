//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface TSSetupAssistantSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    _Bool _showAddPlan;
    _Bool _allowDismiss;
    NSMutableArray *_danglingPlanItems;
    NSString *_iccid;
}

+ (void)needsToRun:(CDUnknownBlockType)arg1;
@property _Bool allowDismiss; // @synthesize allowDismiss=_allowDismiss;
@property(readonly) NSString *iccid; // @synthesize iccid=_iccid;
@property _Bool showAddPlan; // @synthesize showAddPlan=_showAddPlan;
@property(retain) NSMutableArray *danglingPlanItems; // @synthesize danglingPlanItems=_danglingPlanItems;
- (void).cxx_destruct;
- (void)viewControllerDidComplete:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (id)firstViewController;
- (id)initWithIccid:(id)arg1 showAddPlan:(_Bool)arg2 allowDismiss:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

