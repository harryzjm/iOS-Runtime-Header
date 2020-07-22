//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, UITapGestureRecognizer;
@protocol PUFeedCellDelegate;

__attribute__((visibility("hidden")))
@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _tappable;
    id <PUFeedCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    NSString *_representedElementKind;
    UITapGestureRecognizer *__tapGestureRecognizer;
    struct CGPoint _parallaxOffset;
    struct CGPoint _edgeParallaxOffset;
}

+ (struct CGRect)rectWithAspectRatio:(double)arg1 fillingRect:(struct CGRect)arg2 parallaxOffset:(struct CGPoint)arg3 edgeParallaxOffset:(struct CGPoint)arg4;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic) NSString *representedElementKind; // @synthesize representedElementKind=_representedElementKind;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) struct CGPoint edgeParallaxOffset; // @synthesize edgeParallaxOffset=_edgeParallaxOffset;
@property(nonatomic) struct CGPoint parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
@property(nonatomic, getter=isTappable) _Bool tappable; // @synthesize tappable=_tappable;
@property(nonatomic) __weak id <PUFeedCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldRecognizerTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_updateTapGestureRecognizer;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

