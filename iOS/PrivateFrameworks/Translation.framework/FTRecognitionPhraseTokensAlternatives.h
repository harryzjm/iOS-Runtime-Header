//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionPhraseTokensAlternatives : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionPhraseTokensAlternatives *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_b504f884)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) _Bool has_unsuggested_alternatives;
@property(readonly, nonatomic) NSArray *tok_phrases;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
