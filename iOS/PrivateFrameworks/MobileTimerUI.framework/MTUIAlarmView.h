//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MTUIDigitalClockLabel, NSArray, NSDictionary, NSString, UIFont, UILabel, UISwitch;

@interface MTUIAlarmView : UIView
{
    id _contentSizeFontAdjustObserver;
    _Bool _shouldAddLayoutConstraints;
    _Bool _switchVisible;
    long long _style;
    MTUIDigitalClockLabel *_timeLabel;
    NSString *_name;
    NSString *_repeatText;
    UILabel *_detailLabel;
    UIFont *_nameFont;
    UIFont *_repeatFont;
    UISwitch *_enabledSwitch;
    NSArray *_currentConstraints;
}

@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic, getter=isSwitchVisible) _Bool switchVisible; // @synthesize switchVisible=_switchVisible;
@property(nonatomic) _Bool shouldAddLayoutConstraints; // @synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints;
@property(readonly, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(retain, nonatomic) UIFont *repeatFont; // @synthesize repeatFont=_repeatFont;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) NSString *repeatText; // @synthesize repeatText=_repeatText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MTUIDigitalClockLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_loadFontsWithTextStyles;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
- (void)updateConstraints;
@property(readonly, nonatomic) NSDictionary *viewsByIdentifier;
- (void)tearDownContentSizeChangeObserver;
- (id)initWithFrame:(struct CGRect)arg1;

@end

