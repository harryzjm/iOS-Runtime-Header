//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTPostItnHammerRequest, FTPostItnHammerResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTAsrPostItnHammerMessage : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AsrPostItnHammerMessage *_root;
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;
+ (Class)session_message_immutableClassForType:(long long)arg1;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_ce6f1626)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTPostItnHammerResponse *session_messageAsFTPostItnHammerResponse;
@property(readonly, nonatomic) FTPostItnHammerRequest *session_messageAsFTPostItnHammerRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrPostItnHammerMessage *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrPostItnHammerMessage *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

