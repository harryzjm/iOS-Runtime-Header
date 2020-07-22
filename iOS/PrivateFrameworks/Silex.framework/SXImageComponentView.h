//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXDragManagerDataSource-Protocol.h>
#import <Silex/SXImageViewDelegate-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, SXAnimatedImageController, SXDragManager, SXImageView;

@interface SXImageComponentView <UIGestureRecognizerDelegate, SXImageViewDelegate, SXDragManagerDataSource>
{
    SXImageView *_imageView;
    SXAnimatedImageController *_animatedImageController;
    SXDragManager *_dragManager;
}

@property(retain, nonatomic) SXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) SXAnimatedImageController *animatedImageController; // @synthesize animatedImageController=_animatedImageController;
@property(readonly, nonatomic) SXImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)analyticsMediaType;
@property(readonly, copy) NSString *description;
- (id)imageResource;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (id)viewForDragManager:(id)arg1;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)contentViewForBehavior:(id)arg1;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (_Bool)transitionViewUsesThumbnail;
- (struct CGRect)transitionContentFrame;
- (id)transitionContentView;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponent;
- (struct CGRect)imageFrame;
- (void)layoutImageView;
- (void)createImageView;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

