//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSValueTransformer;

@interface VSDeveloperAttribute : NSObject
{
    NSString *_displayName;
    NSString *_placeholder;
    NSString *_keyPath;
    long long _autocorrectionType;
    long long _spellCheckingType;
    long long _keyboardType;
    NSValueTransformer *_valueTransformer;
}

+ (id)standardAttributes;
@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)init;

@end

