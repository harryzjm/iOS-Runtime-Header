//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView
{
    _Bool _shouldDisplayTitle;
    long long _style;
    UILabel *_titleLabel;
}

+ (id)supplementaryViewKind;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool shouldDisplayTitle; // @synthesize shouldDisplayTitle=_shouldDisplayTitle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)layoutSubviews;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

