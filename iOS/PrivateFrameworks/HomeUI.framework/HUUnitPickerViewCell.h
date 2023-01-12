//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UILabel;

@interface HUUnitPickerViewCell
{
    NSAttributedString *_longestValue;
    NSString *_unitText;
    UILabel *_unitLabel;
    struct CGSize _longestValueSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(copy, nonatomic) NSString *unitText; // @synthesize unitText=_unitText;
- (struct CGSize)_estimatedSizeForAttributedString:(id)arg1;
@property(readonly, nonatomic) struct CGSize longestValueSize; // @synthesize longestValueSize=_longestValueSize;
@property(readonly, nonatomic) NSAttributedString *longestValue; // @synthesize longestValue=_longestValue;
- (id)effectiveUnitText;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)reloadPickerView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
