//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIKeyboardShortcut : NSObject
{
    NSString *_keyEquivalent;
    unsigned long long _modifierFlags;
    NSString *_displayStringOverride;
}

+ (_Bool)isMirroringCandidate:(id)arg1;
+ (id)findLocalizationForKeyboardShortcut:(id)arg1 withModifiers:(unsigned long long)arg2 inApplicableOverrides:(id)arg3 usingKeyboardType:(unsigned int)arg4;
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 withAttributes:(id)arg3;
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 usingKeyboardType:(unsigned int)arg3;
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2;
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayStringOverride; // @synthesize displayStringOverride=_displayStringOverride;
@property unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(retain, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;

@end
