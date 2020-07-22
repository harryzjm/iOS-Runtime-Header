//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicProductAdditionalMetadataViewController;

@protocol MusicProductAdditionalMetadataViewControllerDelegate <NSObject>

@optional
- (_Bool)productAdditionalMetadataViewControllerShouldDeferContentHeightAnimationUpdates:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerWillBeginContentHeightAnimation:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidFinishContentHeightAnimation:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateVisibleSwitchState:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdatePublicSwitchState:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateProductDescription:(MusicProductAdditionalMetadataViewController *)arg1;
- (void)productAdditionalMetadataViewControllerDidSelectAddSongsButton:(MusicProductAdditionalMetadataViewController *)arg1;
@end

