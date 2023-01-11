//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SiriTranslationInfo *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_aedd1960)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSArray *translation_phrase;
@property(readonly, nonatomic) NSArray *itn_alignments;
@property(readonly, nonatomic) NSString *post_itn_recognition;
@property(readonly, nonatomic) NSArray *post_itn_tokens;
@property(readonly, nonatomic) NSArray *raw_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *raw_sausage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
