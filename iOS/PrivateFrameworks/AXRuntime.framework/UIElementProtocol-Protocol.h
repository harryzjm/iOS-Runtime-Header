//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXRuntime/NSCopying-Protocol.h>
#import <AXRuntime/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol UIElementProtocol;

@protocol UIElementProtocol <NSObject, NSCopying>
+ (NSArray *)proxiedMLElementsForApp:(id <UIElementProtocol>)arg1;
+ (id)scrollAncestorAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (void)applyElementCustomAttributeCacheScheme:(NSArray *)arg1;
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
@property(readonly, nonatomic) NSMutableDictionary *copyCachedAttributes;
@property(readonly, nonatomic) NSDictionary *cachedAttributes;
- (_Bool)isMockElement;
- (_Bool)isMLElement;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withArray:(NSArray *)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(NSArray *)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(NSNumber *)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(NSString *)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;
- (NSArray *)previousElementsWithParameters:(NSDictionary *)arg1;
- (NSArray *)nextElementsWithParameters:(NSDictionary *)arg1;
- (NSArray *)previousElementsWithCount:(unsigned long long)arg1;
- (NSArray *)nextElementsWithCount:(unsigned long long)arg1;
- (void)updateCacheWithAttributes:(NSArray *)arg1;
- (void)updateCache:(long long)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (_Bool)performAXAction:(int)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (int)pid;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (NSNumber *)numberWithAXAttribute:(long long)arg1;
- (_Bool)boolWithAXAttribute:(long long)arg1;
- (NSString *)stringWithAXAttribute:(long long)arg1;
- (NSArray *)arrayWithAXAttribute:(long long)arg1;
- (_Bool)isValidForApplication:(NSObject<UIElementProtocol> *)arg1;
- (_Bool)isValid;

@optional
@property(readonly, nonatomic) struct __AXUIElement *axElement;
@end

