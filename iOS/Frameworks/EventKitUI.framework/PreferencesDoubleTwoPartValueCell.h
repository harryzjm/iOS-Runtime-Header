//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TwoPartTextLabel, UILabel;

@interface PreferencesDoubleTwoPartValueCell
{
    UILabel *_textLabel2;
    TwoPartTextLabel *_twoPartLabel2;
}

- (void).cxx_destruct;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)checkValueWidths;
- (void)_layoutSubviewsCore;
@property(readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel2;
@property(readonly, retain, nonatomic) UILabel *textLabel2;

@end
