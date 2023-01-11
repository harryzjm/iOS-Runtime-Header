//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUICollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    struct {
        unsigned int layoutBelowDisabled:1;
    } _flags;
}

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

