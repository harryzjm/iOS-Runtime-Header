//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (IC)
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3;
- (id)ic_animator;
- (id)ic_renderImageView;
- (id)ic_renderImage;
- (void)ic_addConstraintsToFillSuperview;
- (void)ic_removeAllConstraintsForSubview:(id)arg1;
- (id)ic_imageViewRenderedFromViewHierarchy;
- (id)ic_imageViewRenderedFromLayer;
- (id)ic_imageRenderedFromViewHierarchy;
- (id)ic_imageRenderedFromLayer;
- (void)ic_crashIfWindowIsSecure;
- (_Bool)ic_isInSecureWindow;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets ic_directionalSafeAreaInsets;
@property(readonly, nonatomic) _Bool ic_isRTL;
@end
