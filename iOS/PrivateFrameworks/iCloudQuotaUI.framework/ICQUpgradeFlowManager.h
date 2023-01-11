//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/ICQPageDelegate-Protocol.h>
#import <iCloudQuotaUI/UINavigationControllerDelegate-Protocol.h>

@class ICQAlertController, ICQOffer, ICQUpgradeFlowOptions, ICQUpgradeOfferViewController, NSDictionary, NSString, UINavigationController;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUpgradeFlowManager : NSObject <UINavigationControllerDelegate, ICQPageDelegate>
{
    ICQUpgradeOfferViewController *_busyOfferViewController;
    _Bool _shouldNavigationControllerBeDismissed;
    _Bool _completedFamilySetup;
    ICQOffer *_offer;
    NSDictionary *_bindings;
    ICQUpgradeFlowOptions *_flowOptions;
    id <ICQUpgradeFlowManagerDelegate> _delegate;
    UINavigationController *_hostingNavigationController;
    ICQAlertController *_upgradeAlertController;
}

+ (_Bool)shouldSubclassShowForOffer:(id)arg1;
+ (void)removeActiveFlowManager:(id)arg1;
+ (void)addActiveFlowManager:(id)arg1;
+ (id)activeFlowManagers;
+ (Class)subclassForOfferType:(long long)arg1;
+ (_Bool)shouldShowForOffer:(id)arg1;
+ (void)needsToRunWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool completedFamilySetup; // @synthesize completedFamilySetup=_completedFamilySetup;
@property(retain, nonatomic) ICQAlertController *upgradeAlertController; // @synthesize upgradeAlertController=_upgradeAlertController;
@property(retain, nonatomic) UINavigationController *hostingNavigationController; // @synthesize hostingNavigationController=_hostingNavigationController;
@property(nonatomic) _Bool shouldNavigationControllerBeDismissed; // @synthesize shouldNavigationControllerBeDismissed=_shouldNavigationControllerBeDismissed;
@property(nonatomic) __weak id <ICQUpgradeFlowManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // @synthesize flowOptions=_flowOptions;
@property(retain, nonatomic) NSDictionary *bindings; // @synthesize bindings=_bindings;
@property(readonly, nonatomic) ICQOffer *offer; // @synthesize offer=_offer;
- (void).cxx_destruct;
- (void)_sendDelegateDidPresentViewController:(id)arg1;
- (void)_sendDelegateComplete;
- (void)_sendDelegateCancel;
- (void)_initiateFamilySetupFlow;
- (void)_simulateDoneButton;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_clearBusyOfferViewController;
- (void)_presentUpgradeComplete;
- (void)_presentPageWithSpecification:(id)arg1;
- (void)_cancelFlow;
- (_Bool)needsNetwork;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initSubclassWithOffer:(id)arg1;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setBusyOfferViewController:(id)arg1;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2;
- (void)_tappedAlertLink:(id)arg1;
- (id)initWithOffer:(id)arg1;
- (id)initBaseclassWithOffer:(id)arg1;
- (id)init;
- (void)presentFlowHostedInNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

