//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PBFFocusPosterSelectionViewController, PRUIModalEntryPointResponse;

@protocol PBFFocusPosterSelectionViewControllerDelegate <NSObject>
- (struct PREditingSceneViewControllerTopButtonLayout)topButtonLayoutForFocusPosterSelectionViewController:(PBFFocusPosterSelectionViewController *)arg1;
- (void)focusPosterSelectionViewController:(PBFFocusPosterSelectionViewController *)arg1 didDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)focusPosterSelectionViewController:(PBFFocusPosterSelectionViewController *)arg1 willDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
@end

