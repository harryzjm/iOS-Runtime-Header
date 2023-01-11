//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UILabel, UILayoutGuide;

@interface STTopUsageViewItem : NSObject
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILayoutGuide *_leadingLayoutGuide;
}

@property(retain, nonatomic) UILayoutGuide *leadingLayoutGuide; // @synthesize leadingLayoutGuide=_leadingLayoutGuide;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)init;

@end
