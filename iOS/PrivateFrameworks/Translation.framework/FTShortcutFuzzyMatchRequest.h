//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTShortcutFuzzyMatchRequest : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ShortcutFuzzyMatchRequest *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_b392b7fa)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *context;
@property(readonly, nonatomic) NSString *device_type;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *interaction_id;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *request_id;
- (void)shortcuts_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)shortcuts_count;
- (id)shortcuts_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *shortcuts;
@property(readonly, nonatomic) FTShortcutFuzzyMatchRequest_StringTokenPair *utterance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

