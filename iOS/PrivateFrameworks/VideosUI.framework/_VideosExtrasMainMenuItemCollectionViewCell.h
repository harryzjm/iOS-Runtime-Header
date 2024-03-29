//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell
{
    NSLayoutConstraint *_textLabelConstraint;
    UILabel *_textLabel;
}

+ (id)_createLabelInCell:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSLayoutConstraint *textLabelConstraint; // @synthesize textLabelConstraint=_textLabelConstraint;
- (void)setSelected:(_Bool)arg1;
- (void)_dynamicTypeChanged;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

