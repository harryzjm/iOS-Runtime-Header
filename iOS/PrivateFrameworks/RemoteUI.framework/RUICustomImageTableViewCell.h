//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel, UIStackView;

@interface RUICustomImageTableViewCell
{
    UIImageView *_customImageViewInternal;
    UILabel *_customTextLabelInternal;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *customTextLabelInternal; // @synthesize customTextLabelInternal=_customTextLabelInternal;
@property(retain, nonatomic) UIImageView *customImageViewInternal; // @synthesize customImageViewInternal=_customImageViewInternal;
- (void)_initializeViews;
- (id)_customTextLabelInternal;
@property(readonly, nonatomic) UILabel *customTextLabel;
- (id)_customImageViewInternal;
@property(readonly, nonatomic) UIImageView *customImageView;

@end
