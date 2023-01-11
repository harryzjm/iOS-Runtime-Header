//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PSController-Protocol.h>

@class NSString, PSRootController, PSSpecifier;
@protocol PSController;

@interface PUStorageManagementBaseController : UIViewController <PSController>
{
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

- (void).cxx_destruct;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleURL:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)showController:(id)arg1;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (void)suspend;
- (_Bool)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (id)parentController;
- (void)setParentController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
