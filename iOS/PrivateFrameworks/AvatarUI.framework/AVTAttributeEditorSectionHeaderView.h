//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView
{
    UILabel *_label;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *displayString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

