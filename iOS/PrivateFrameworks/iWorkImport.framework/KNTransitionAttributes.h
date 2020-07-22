//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface KNTransitionAttributes
{
}

+ (_Bool)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;
+ (id)defaultAttributesForEffect:(id)arg1;
+ (id)p_readDeprecatedAttributesForArchive:(const struct TransitionAttributesArchive *)arg1 intoDictionary:(id)arg2;
+ (void)p_readTransitionAttributesForArchive:(const struct TransitionAttributesArchive *)arg1 intoDictionary:(id)arg2;
+ (void)p_readSharedAttributesForArchive:(struct AnimationAttributesArchive *)arg1 intoDictionary:(id)arg2;
- (void)p_writeTransitionAttributesToArchive:(struct TransitionAttributesArchive *)arg1;
- (void)p_writeSharedAttributesToArchive:(struct TransitionAttributesArchive *)arg1;
- (void)encodeToArchive:(struct TransitionAttributesArchive *)arg1;
- (id)initFromTransitionAttributesArchive:(const struct TransitionAttributesArchive *)arg1;

@end

