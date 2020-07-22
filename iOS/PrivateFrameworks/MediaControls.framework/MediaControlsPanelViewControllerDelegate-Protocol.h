//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsPanelViewController;

@protocol MediaControlsPanelViewControllerDelegate <NSObject>

@optional
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didToggleRoutingPicker:(_Bool)arg2;
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)didDismissMediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1;
@end

