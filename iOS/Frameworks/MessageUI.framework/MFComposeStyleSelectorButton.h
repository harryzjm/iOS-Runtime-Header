//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface MFComposeStyleSelectorButton : UIButton
{
    long long _styleType;
}

+ (id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
@property(readonly, nonatomic) long long styleType; // @synthesize styleType=_styleType;
- (id)_imageForTextStyleType:(long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
