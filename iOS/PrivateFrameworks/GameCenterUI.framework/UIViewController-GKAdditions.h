//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/GKContentRefresh-Protocol.h>
#import <GameCenterUI/GKURLHandling-Protocol.h>

@class NSString;

@interface UIViewController (GKAdditions) <GKContentRefresh, GKURLHandling>
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;
- (void)_gkDismissActivityViewControllerAnimated:(_Bool)arg1;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
