//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTMultiUserRecognitionCandidate : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultiUserRecognitionCandidate *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_2de27c14)addObjectToBuffer:(void *)arg1;
- (void)recognition_candidate_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)recognition_candidate_count;
- (id)recognition_candidate_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *recognition_candidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserRecognitionCandidate *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserRecognitionCandidate *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

