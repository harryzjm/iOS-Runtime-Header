//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDAnimateEffectBehavior
{
    _Bool mHasTransition;
    int mTransition;
    NSMutableDictionary *mPropertyMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *propertyMap; // @synthesize propertyMap=mPropertyMap;
- (_Bool)hasProperties;
- (void)setTransition:(int)arg1;
- (int)transition;
- (_Bool)hasTransition;
- (id)init;

@end

