//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSAction.h"

@class CNContact, DDScannerResult, DDUIAction, NSArray, NSString, UIMenu;

__attribute__((visibility("hidden")))
@interface BCSDataDetectorsSupportedAction : BCSAction
{
    NSArray *_actions;
    UIMenu *_ddUIMenu;
    DDUIAction *_defaultDDAction;
    DDScannerResult *_scannerResult;
    CNContact *_contact;
    NSString *_icsString;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *icsString; // @synthesize icsString=_icsString;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) DDScannerResult *scannerResult; // @synthesize scannerResult=_scannerResult;
- (id)contentPreviewString;
- (unsigned long long)menuElementsCount;
- (id)menuElements;
- (_Bool)preferItemsInSubmenu;
- (void)_setUpActionMenuIfNeeded;
- (id)_hostingViewForAction;
- (id)shortDescription;
- (id)actionIcon;
- (id)_actionStringsArray;
- (void)determineActionabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)debugDescriptionExtraInfoDictionary;
- (void)_performActionAndShowActionPickerIfNeeded:(_Bool)arg1;
- (void)performAction;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)localizedDefaultActionDescription;
- (id)localizedActionDescription;
- (id)url;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

