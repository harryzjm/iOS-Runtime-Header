//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCorrectionsValidatorRequest, FTCorrectionsValidatorResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTAsrCorrectionsValidatorMessage : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AsrCorrectionsValidatorMessage *_root;
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;
+ (Class)session_message_immutableClassForType:(long long)arg1;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_f727901a)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTCorrectionsValidatorResponse *session_messageAsFTCorrectionsValidatorResponse;
@property(readonly, nonatomic) FTCorrectionsValidatorRequest *session_messageAsFTCorrectionsValidatorRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrCorrectionsValidatorMessage *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrCorrectionsValidatorMessage *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

