//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class UIPreviewInteraction;

@protocol UIPreviewInteractionDelegate <NSObject>
- (void)previewInteractionDidCancel:(UIPreviewInteraction *)arg1;
- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;

@optional
- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(UIPreviewInteraction *)arg1;
@end

