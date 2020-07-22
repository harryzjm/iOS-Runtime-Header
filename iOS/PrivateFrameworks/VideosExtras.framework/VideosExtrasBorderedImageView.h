//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class UIColor;

@interface VideosExtrasBorderedImageView : UIImageView
{
    _Bool _shouldDeferSettingTransform;
    _Bool _shouldUseTransformWhenReplicatingState;
    _Bool _shouldSkipImageWhenReplicatingState;
    struct CGAffineTransform _deferredTransform;
}

@property(nonatomic) _Bool shouldSkipImageWhenReplicatingState; // @synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState;
@property(nonatomic) _Bool shouldUseTransformWhenReplicatingState; // @synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState;
@property(nonatomic) _Bool shouldDeferSettingTransform; // @synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform;
@property(nonatomic) struct CGAffineTransform deferredTransform; // @synthesize deferredTransform=_deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
@property(nonatomic) double borderWidth;
@property(copy, nonatomic) UIColor *borderColor;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;

@end

