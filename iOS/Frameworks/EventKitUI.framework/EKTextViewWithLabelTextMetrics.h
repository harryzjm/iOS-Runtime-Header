//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

#import <EventKitUI/CalendarLabelTextMetrics-Protocol.h>

@class NSString, UIColor, UIFont;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics>
{
    long long lineBreakMode;
}

@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
@property(nonatomic) long long numberOfLines;
- (void)setURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;

@end

