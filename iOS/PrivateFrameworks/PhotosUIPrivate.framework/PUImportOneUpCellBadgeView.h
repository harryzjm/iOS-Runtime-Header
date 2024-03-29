//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportOneUpCellBadgeView : UICollectionReusableView
{
    _Bool _selectable;
    _Bool _inUpdateBlock;
    _Bool _needsBadgeUpdate;
    long long _badgeType;
    UIView *_badgeContainerView;
    UIView *_badgeView;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(nonatomic) _Bool inUpdateBlock; // @synthesize inUpdateBlock=_inUpdateBlock;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
- (void)_createSpinnerIfNecessary;
- (void)performBadgeUpdates:(CDUnknownBlockType)arg1;
- (void)updateBadgeUIIfNeeded;
- (void)setNeedsBadgeUpdate;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

