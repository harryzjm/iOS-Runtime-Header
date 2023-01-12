//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIRemoteViewController.h"

@class NSString;
@protocol _UIFontPickerRemoteViewControllerHost;

__attribute__((visibility("hidden")))
@interface _UIFontPickerRemoteViewController : _UIRemoteViewController
{
    id <_UIFontPickerRemoteViewControllerHost> _delegate;
}

+ (_Bool)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_UIFontPickerRemoteViewControllerHost> _delegate; // @synthesize _delegate;
- (_Bool)_canShowWhileLocked;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

