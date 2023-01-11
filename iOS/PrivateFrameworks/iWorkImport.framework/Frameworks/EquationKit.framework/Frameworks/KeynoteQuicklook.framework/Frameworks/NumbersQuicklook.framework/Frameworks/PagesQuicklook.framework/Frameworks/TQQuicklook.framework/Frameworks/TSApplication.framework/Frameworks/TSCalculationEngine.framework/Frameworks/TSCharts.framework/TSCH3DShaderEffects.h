//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface TSCH3DShaderEffects : NSObject <NSCopying>
{
    NSMutableDictionary *mSections;
    NSArray *mCacheList;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)injectMetalShaderInto:(id)arg1 context:(id)arg2;
- (void)injectGLSLInto:(id)arg1 context:(id)arg2;
- (void)addVariables:(id)arg1;
- (void)enumerateEffectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)resetSection:(int)arg1 toArray:(id)arg2;
- (void)resetSection:(int)arg1;
- (_Bool)isSectionEnabled:(int)arg1;
- (void)setEnable:(_Bool)arg1 forSection:(int)arg2;
- (void)addEffectOnce:(id)arg1 toSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1 toSection:(int)arg2;
- (void)addEffect:(id)arg1 toSection:(int)arg2;
- (void)prependEffect:(id)arg1 toSection:(int)arg2;
- (void)resetToArray:(id)arg1;
- (void)reset;
- (void)removeEffect:(id)arg1 fromSection:(int)arg2;
- (_Bool)removeEffectOfClass:(Class)arg1 fromSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1;
- (void)addEffect:(id)arg1;
- (void)prependEffect:(id)arg1;
@property(readonly, nonatomic) NSSet *identifier;
- (_Bool)isEqual:(id)arg1;
- (id)effects;
- (void)resetCacheList;
- (id)description;
- (void)dealloc;
- (id)init;

@end
