//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WFVariableConfigurationInfoView : UIView
{
    NSString *_heading;
    NSString *_subheading;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *subheading; // @synthesize subheading=_subheading;
@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
- (void)updateLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
