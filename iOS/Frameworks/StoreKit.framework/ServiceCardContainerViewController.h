//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface ServiceCardContainerViewController : UIViewController
{
    UIViewController *_childViewController;
    _UIRemoteViewController *_remoteViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)loadView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

