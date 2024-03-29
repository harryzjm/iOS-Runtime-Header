//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryTextField : NSObject
{
    _Bool _autoShowKeyboard;
    NSString *_label;
    unsigned long long _expectedLength;
    NSString *_text;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _returnKeyType;
}

- (void).cxx_destruct;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool autoShowKeyboard; // @synthesize autoShowKeyboard=_autoShowKeyboard;
@property(nonatomic) unsigned long long expectedLength; // @synthesize expectedLength=_expectedLength;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)init;

@end

