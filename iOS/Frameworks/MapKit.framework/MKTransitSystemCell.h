//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UIImage, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitSystemCell
{
    UIImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    NSLayoutConstraint *_imageToLabelConstraint;
    NSLayoutConstraint *_systemLabelToTopConstraint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemName;
@property(retain, nonatomic) UIImage *systemArtwork;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)initWithReuseIdentifier:(id)arg1;

@end

