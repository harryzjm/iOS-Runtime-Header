//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSString;

@interface UINavigationController (HUPreloadingNavigationPresentation)
- (id)hu_preloadContent;
- (id)hu_pushPreloadableViewController:(id)arg1 animated:(_Bool)arg2 waitForPreload:(_Bool)arg3;
- (id)hu_pushPreloadableViewController:(id)arg1 animated:(_Bool)arg2;
- (id)hu_presentedItem;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

