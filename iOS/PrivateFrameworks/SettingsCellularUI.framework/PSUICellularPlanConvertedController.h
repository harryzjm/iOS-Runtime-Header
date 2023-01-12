//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTCellularPlanItem, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanConvertedController : PSListController
{
    CTCellularPlanItem *_plan;
    PSUICellularPlanUniversalReference *_planReference;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(retain, nonatomic) CTCellularPlanItem *plan; // @synthesize plan=_plan;
- (id)getLogger;
- (void)_maybeAddRemoveCellularPlanSpecifier:(id)arg1;
- (id)_turnOnThisLineSpecifier;
- (id)_phoneNumberSpecifier;
- (id)_labelSpecifier;
- (id)_carrierNameSpecifier;
- (id)_removeSIMSpecifier;
- (id)getTransferredTitle:(id)arg1 forPad:(_Bool)arg2;
- (id)_phoneNumber:(id)arg1;
- (id)_planLabel:(id)arg1;
- (id)specifiers;

@end

