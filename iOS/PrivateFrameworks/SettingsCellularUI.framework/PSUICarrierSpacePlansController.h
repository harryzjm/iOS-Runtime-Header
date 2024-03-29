//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTCarrierSpaceClient, NSObject, NSString, RemoteUIController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpacePlansController : PSListController
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    RemoteUIController *_remoteUIController;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (id)getLogger;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)dismissPlanDetail;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)stringFromGroupCategory:(long long)arg1;
- (id)detailForPlanOption:(id)arg1;
- (void)moreDetailsButtonTapped:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)carrierSpaceChanged;
- (void)simStatusChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

