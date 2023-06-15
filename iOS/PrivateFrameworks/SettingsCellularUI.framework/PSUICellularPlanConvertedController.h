//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTCellularPlanItem, NSString, PSSpecifier, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanConvertedController : PSListController
{
    CTCellularPlanItem *_planItem;
    PSUICellularPlanUniversalReference *_planReference;
    PSSpecifier *_weakStatusSpecifier;
    PSSpecifier *_weakReactivateSpecifier;
    NSString *_planStatus;
}

- (void).cxx_destruct;
@property(retain) NSString *planStatus; // @synthesize planStatus=_planStatus;
@property __weak PSSpecifier *weakReactivateSpecifier; // @synthesize weakReactivateSpecifier=_weakReactivateSpecifier;
@property __weak PSSpecifier *weakStatusSpecifier; // @synthesize weakStatusSpecifier=_weakStatusSpecifier;
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(retain, nonatomic) CTCellularPlanItem *planItem; // @synthesize planItem=_planItem;
- (id)getLogger;
- (void)_updateReactivateSpecifier:(id)arg1;
- (void)_updateStatusSpecifier:(id)arg1;
- (void)_updatePlanStatus:(id)arg1;
- (void)_cellularPlanChanged:(id)arg1;
- (void)_maybeAddRemoveCellularPlanSpecifier:(id)arg1;
- (id)_reactivateSIMSpecifier;
- (id)_turnOnThisLineSpecifier;
- (id)_phoneNumberSpecifier;
- (id)_labelSpecifier;
- (id)_statusSpecifier;
- (id)_simTypeSpecifier;
- (id)_removeSIMSpecifier;
- (id)_phoneNumber:(id)arg1;
- (id)_status:(id)arg1;
- (id)_planLabel:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;

@end

