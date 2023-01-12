//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioAnalytics : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioAnalytics *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_245a6b61)addObjectToBuffer:(void *)arg1;
- (void)acoustic_features_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)acoustic_features_count;
- (id)acoustic_features_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *acoustic_features;
- (void)speech_recognition_features_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)speech_recognition_features_count;
- (id)speech_recognition_features_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *speech_recognition_features;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

