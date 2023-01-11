//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextField;

@interface PKPaymentPreferenceDetailedCell
{
    UITextField *_textField;
    _Bool _isLeftToRight;
    double _minimumCellHeight;
    _Bool _inlineEditingEnabled;
    double _leadingOffset;
}

@property(nonatomic) double minimumCellHeight; // @synthesize minimumCellHeight=_minimumCellHeight;
@property(nonatomic) double leadingOffset; // @synthesize leadingOffset=_leadingOffset;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool inlineEditingEnabled; // @synthesize inlineEditingEnabled=_inlineEditingEnabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showTextField:(_Bool)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

