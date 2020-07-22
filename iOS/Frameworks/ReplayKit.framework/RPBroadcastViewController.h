//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class RPBroadcastHostViewController;
@protocol RPBroadcastViewControllerDelegate;

@interface RPBroadcastViewController : UIViewController
{
    id <RPBroadcastViewControllerDelegate> _delegate;
    RPBroadcastHostViewController *_hostViewController;
    CDUnknownBlockType _setupCompletionHandler;
}

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadBroadcastViewControllerWithBaseIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)getBroadcastExtensionWithBaseIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType setupCompletionHandler; // @synthesize setupCompletionHandler=_setupCompletionHandler;
@property(retain, nonatomic) RPBroadcastHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(nonatomic) __weak id <RPBroadcastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;

@end

