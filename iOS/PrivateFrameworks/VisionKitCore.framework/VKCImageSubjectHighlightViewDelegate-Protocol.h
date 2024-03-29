//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSURL, UIBezierPath, UIViewController, VKCImageSubjectHighlightView;

@protocol VKCImageSubjectHighlightViewDelegate <NSObject>
- (void)videoPreviewAvailableForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;
- (NSURL *)tempPNGURLForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;
- (UIViewController *)presentingViewControllerForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 activateVSItemForNormalizedPath:(UIBezierPath *)arg2;
- (_Bool)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 containsVSItemForNormalizedPath:(UIBezierPath *)arg2;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 livePhotoShouldPlay:(_Bool)arg2;
- (void)subjectHighlightViewSubjectInteractionInProgressDidChange:(VKCImageSubjectHighlightView *)arg1;
- (_Bool)isSubjectHighlightShowingLivePhoto:(VKCImageSubjectHighlightView *)arg1 delegateHasImplementation:(_Bool *)arg2;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 willBeginInteractionAtPoint:(struct CGPoint)arg2 withType:(unsigned long long)arg3;
- (_Bool)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 shouldBeginInteractionAtPoint:(struct CGPoint)arg2 withType:(unsigned long long)arg3;
@end

