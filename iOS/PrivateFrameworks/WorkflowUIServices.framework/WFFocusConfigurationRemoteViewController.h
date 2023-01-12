//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, WFFocusConfigurationHostContext;
@protocol WFFocusConfigurationRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFFocusConfigurationRemoteViewController : _UIRemoteViewController
{
    id <WFFocusConfigurationRemoteViewControllerDelegate> _delegate;
    WFFocusConfigurationHostContext *_serviceContext;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) WFFocusConfigurationHostContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(nonatomic) __weak id <WFFocusConfigurationRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusConfigurationHostContext:(id)arg1 didPressButtonWithIdentifier:(id)arg2 cellFrame:(struct CGRect)arg3;
- (void)didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect)arg2;
- (void)focusConfigurationHostContext:(id)arg1 configurationUIStateDidChange:(id)arg2;
- (void)configurationUIStateDidUpdate:(id)arg1;
- (void)notifyDelegateWithPressedButtonIdentifier:(id)arg1 cellFrame:(struct CGRect)arg2;
- (void)notifyDelegateWithConfigurationUIState:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

