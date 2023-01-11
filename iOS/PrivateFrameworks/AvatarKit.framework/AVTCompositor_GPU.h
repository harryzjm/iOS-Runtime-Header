//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableSet;

@interface AVTCompositor_GPU
{
    NSMutableSet *_textureProviders;
    NSMutableArray *_cachedTexturesInvalidationTokens;
}

- (void).cxx_destruct;
- (void)updateMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3;
- (void)componentDidChangeForType:(long long)arg1;
- (void)skinColorDidChange;
- (id)cachedTexturesInvalidationTokens;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)init;

@end
