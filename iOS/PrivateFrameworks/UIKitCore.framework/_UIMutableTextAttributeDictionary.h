//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@protocol _UITextAttributeDefaults;

__attribute__((visibility("hidden")))
@interface _UIMutableTextAttributeDictionary : NSMutableDictionary
{
}

+ (id)alloc;
+ (id)new;
- (id)sparseDictionary;
- (void)setIgnoresFallback:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)ignoresFallbackForKey:(id)arg1;
- (_Bool)usesFallbackForKey:(id)arg1;
- (id)initWithFallback:(id)arg1;
- (id)initWithDictionary:(id)arg1 fallback:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <_UITextAttributeDefaults> fallback; // @dynamic fallback;

@end

