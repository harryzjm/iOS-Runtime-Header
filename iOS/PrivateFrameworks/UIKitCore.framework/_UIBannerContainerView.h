//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIBannerContainerView : UIView
{
    NSMutableArray *_banners;
    NSMutableArray *_constraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setBanner:(id)arg1 visible:(_Bool)arg2 alongsideAnimations:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_bannerAnimationToVisible:(_Bool)arg1 hiddenValue:(id)arg2 visibleValue:(id)arg3 withKeyPath:(id)arg4;
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)updateConstraints;
- (void)_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

