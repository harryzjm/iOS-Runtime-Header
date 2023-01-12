//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSHashTable, NSMapTable, UIAlertController, UIViewController, VUIModalPresentationConfiguration;

@interface VUIModalPresentationNavigationController : UINavigationController
{
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    VUIModalPresentationConfiguration *_configuration;
    UIAlertController *_containingAlertController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIAlertController *containingAlertController; // @synthesize containingAlertController=_containingAlertController;
@property(retain, nonatomic) VUIModalPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)_dismissForLastViewController:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateConfiguration;
- (id)initWithConfiguration:(id)arg1;
@property(readonly, nonatomic) NSHashTable *presentedViewControllers;

@end
