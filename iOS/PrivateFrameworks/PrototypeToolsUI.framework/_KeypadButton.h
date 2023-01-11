//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface _KeypadButton : UIButton
{
    long long _keyType;
    unsigned long long _digit;
}

@property(readonly, nonatomic) unsigned long long digit; // @synthesize digit=_digit;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
- (void)_updateBackgroundColor;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithDigit:(unsigned long long)arg1 target:(id)arg2;
- (id)initWithKeyType:(long long)arg1 target:(id)arg2;
- (id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3;

@end
