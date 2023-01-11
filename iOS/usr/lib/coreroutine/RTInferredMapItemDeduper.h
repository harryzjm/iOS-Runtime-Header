//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RTInferredMapItemDeduper : NSObject
{
    CDUnknownBlockType _deduperFunction;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType deduperFunction; // @synthesize deduperFunction=_deduperFunction;
- (id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 error:(id *)arg2;
- (id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (id)dedupeInferredMapItems:(id)arg1 error:(id *)arg2;
- (id)dedupeInferredMapItems:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (id)ingestInferredMapItems:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (id)ingestInferredMapItem:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (_Bool)inferredMapItem:(id)arg1 dedupesToInferredMapItem:(id)arg2 error:(id *)arg3;
- (id)initWithDeduperFunction:(CDUnknownBlockType)arg1;
- (id)init;

@end
