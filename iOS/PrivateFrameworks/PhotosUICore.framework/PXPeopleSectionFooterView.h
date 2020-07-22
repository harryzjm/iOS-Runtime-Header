//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIView;

@interface PXPeopleSectionFooterView : UICollectionReusableView
{
    _Bool _dividerHidden;
    UIButton *_disclosureButton;
    unsigned long long _style;
    UIView *_dividerLine;
}

+ (double)_bottomSpacingForStyle:(unsigned long long)arg1;
+ (double)_middleSpacingForStyle:(unsigned long long)arg1;
+ (double)_topSpacingForStyle:(unsigned long long)arg1;
+ (double)preferredHeightForStyle:(unsigned long long)arg1;
@property(retain) UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isDividerHidden) _Bool dividerHidden; // @synthesize dividerHidden=_dividerHidden;
@property(readonly) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

