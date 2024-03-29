//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSymbolEffect, NSSymbolEffectOptions;

__attribute__((visibility("hidden")))
@interface _UIImageViewSymbolEffectEntry : NSObject
{
    _Bool _animated;
    NSSymbolEffect *_symbolEffect;
    NSSymbolEffectOptions *_options;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) NSSymbolEffectOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSSymbolEffect *symbolEffect; // @synthesize symbolEffect=_symbolEffect;

@end

