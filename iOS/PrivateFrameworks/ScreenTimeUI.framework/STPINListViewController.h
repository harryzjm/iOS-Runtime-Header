//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeUI/STRestrictionsPINControllerDelegate-Protocol.h>

@class NSObject, NSString, PSSpecifier;
@protocol STRootViewModelCoordinator;

@interface STPINListViewController <STRestrictionsPINControllerDelegate>
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
    id _showingPinTarget;
    PSSpecifier *_showingPinSpecifier;
}

@property(retain, nonatomic) PSSpecifier *showingPinSpecifier; // @synthesize showingPinSpecifier=_showingPinSpecifier;
@property(retain, nonatomic) id showingPinTarget; // @synthesize showingPinTarget=_showingPinTarget;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)restoreSpecifierTarget;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didAcceptRemovePIN;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (_Bool)validatePIN:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (_Bool)shouldShowPINSheetForSpecifier:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (id)initWithRootViewModelCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

