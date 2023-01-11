//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSArray, NSString;

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_transformers;
}

+ (id)withTransformers:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *transformers; // @synthesize transformers=_transformers;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPipelineTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2;
- (id)transform:(id)arg1;
- (id)initWithTransformers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
