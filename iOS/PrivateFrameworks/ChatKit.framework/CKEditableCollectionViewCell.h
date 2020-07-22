//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell
{
    _Bool _editing;
    _Bool _hidesCheckmark;
    UIImageView *_checkmark;
    struct CGRect _contentAlignmentRect;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _marginInsets;
}

@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(nonatomic) _Bool hidesCheckmark; // @synthesize hidesCheckmark=_hidesCheckmark;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGRect contentAlignmentRect; // @synthesize contentAlignmentRect=_contentAlignmentRect;
- (void).cxx_destruct;
- (void)updateCheckmarkImage;
- (struct UIEdgeInsets)_horizontalSafeAreaInsets;
@property(readonly, nonatomic) struct UIEdgeInsets contentAlignmentInsets;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)description;

@end
