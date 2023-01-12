//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXGCombinedShaderSource
{
    NSArray *_combinedShaderSources;
    NSArray *_combinedUniforms;
    _Bool _isEmpty;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
- (id)aliasedUniformsForEffects:(id)arg1;
- (_Bool)isValidForEffects:(id)arg1;
- (id)description;
- (id)initWithEffects:(id)arg1;

@end
