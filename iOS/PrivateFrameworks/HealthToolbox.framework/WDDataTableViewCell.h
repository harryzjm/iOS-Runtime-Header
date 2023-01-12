//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class HKSource, NSString, UIFont, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDDataTableViewCell : UITableViewCell
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    _Bool _displayValueAdjustsFontSizeToFitWidth;
    HKSource *_source;
    NSString *_displayValue;
    NSString *_dateString;
    UIFont *_bodyFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) _Bool displayValueAdjustsFontSizeToFitWidth; // @synthesize displayValueAdjustsFontSizeToFitWidth=_displayValueAdjustsFontSizeToFitWidth;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(retain, nonatomic) HKSource *source; // @synthesize source=_source;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGRect)detailTextLabelFrame;
- (id)detailTextLabel;
- (struct CGRect)textLabelFrame;
- (id)textLabel;
- (struct CGRect)imageViewFrame;
- (id)imageView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

