//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <MusicCarDisplayUI/UINavigationControllerDelegate-Protocol.h>

@class MCDPCContainer, MCDPCModel, NSArray, NSOperationQueue, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate>
{
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    _Bool _hasBrowsableContent;
    _Bool _hasSectionedContent;
    _Bool _hasLoaded;
    NSString *_bundleID;
    NSOperationQueue *_modelInvalidationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *modelInvalidationQueue; // @synthesize modelInvalidationQueue=_modelInvalidationQueue;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)currentStack;
- (void)_populateStack;
- (void)_modelDidInvalidate:(id)arg1;
- (void)refreshNavigationStackForLaunch;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_setupView;
- (id)_createRootViewController;
- (id)_createSectionedRootViewController;
- (void)_nowPlayingIdentifiersChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 stack:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
