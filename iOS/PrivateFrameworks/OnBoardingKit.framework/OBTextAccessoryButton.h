//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface OBTextAccessoryButton : UIButton
{
    NSString *_textStyle;
}

+ (id)accessoryButtonWithTextStyle:(id)arg1;
@property(nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
