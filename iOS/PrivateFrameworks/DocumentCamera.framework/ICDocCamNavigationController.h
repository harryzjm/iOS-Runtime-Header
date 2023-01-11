//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>

@class NSString;

@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>
{
}

- (_Bool)_canShowWhileLocked;
- (void)prepareForDismissal;
- (long long)_preferredModalPresentationStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
