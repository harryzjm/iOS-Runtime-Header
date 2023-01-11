//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString;
@protocol PMLMultiLabelClassifierProtocol><PMLPlistAndChunksSerializableProtocol;

@interface SGBinaryClassificationModel <PMLPlistAndChunksSerializableProtocol>
{
    double _threshold;
}

+ (id)modelFromMobileAssetForName:(id)arg1 language:(id)arg2;
+ (id)modelFromMobileAssetForEntity:(id)arg1 type:(id)arg2 language:(id)arg3 class:(Class)arg4;
+ (id)modelForPath:(id)arg1 modelClass:(Class)arg2;
@property(readonly) double threshold; // @synthesize threshold=_threshold;
- (id)serialize;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)predictLabelForInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <PMLMultiLabelClassifierProtocol><PMLPlistAndChunksSerializableProtocol> model; // @dynamic model;
@property(readonly) Class superclass;

@end
