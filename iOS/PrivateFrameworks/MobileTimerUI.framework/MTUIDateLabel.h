//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSDate, NSTimeZone, UIColor, UIFont, UILabel;

@interface MTUIDateLabel : UIView
{
    NSTimeZone *_timeZone;
    _Bool _shouldAddLayoutConstraints;
    NSDate *_date;
    UILabel *_dateLabel;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_timeDesignatorFont;
    NSArray *_currentConstraints;
}

@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) _Bool shouldAddLayoutConstraints; // @synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints;
@property(retain, nonatomic) UIFont *timeDesignatorFont; // @synthesize timeDesignatorFont=_timeDesignatorFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForBaselineLayout;
- (void)_noteLayoutChange;
- (void)_updateDateString;
@property(nonatomic) double lastBaselineFrameOriginY;
- (void)updateConstraints;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (id)initWithFrame:(struct CGRect)arg1;

@end

