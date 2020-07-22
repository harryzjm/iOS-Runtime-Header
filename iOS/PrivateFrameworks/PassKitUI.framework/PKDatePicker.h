//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate;
@protocol PKDatePickerDelegate;

@interface PKDatePicker : UIView
{
    struct UIView *_internalPicker;
    _Bool _showsDay;
    _Bool _showsMonth;
    _Bool _showsYear;
    _Bool _representsCardExpiration;
    _Bool _usesDarkAppearance;
    NSDate *_date;
    id <PKDatePickerDelegate> _delegate;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(nonatomic) _Bool usesDarkAppearance; // @synthesize usesDarkAppearance=_usesDarkAppearance;
@property(nonatomic) id <PKDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) _Bool representsCardExpiration; // @synthesize representsCardExpiration=_representsCardExpiration;
@property(readonly, nonatomic) _Bool showsYear; // @synthesize showsYear=_showsYear;
@property(readonly, nonatomic) _Bool showsMonth; // @synthesize showsMonth=_showsMonth;
@property(readonly, nonatomic) _Bool showsDay; // @synthesize showsDay=_showsDay;
- (void).cxx_destruct;
- (void)_forceReloadInternalPicker;
- (void)_dateValueChanged:(struct UIView *)arg1;
- (Class)_classForDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 representingCardExpiration:(_Bool)arg4;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)reconfigureToShowDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 representingCardExpiration:(_Bool)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

