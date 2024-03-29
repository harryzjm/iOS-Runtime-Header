//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

__attribute__((visibility("hidden")))
@interface VUIFocusableCollectionViewCell : UICollectionViewCell
{
    _Bool _allowsFocus;
}

@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void)_updateBackgroundAndHighlightColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end

