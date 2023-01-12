//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTPronGuessResponse, FTStartPronGuessRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTApgPronGuessMessage : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ApgPronGuessMessage *_root;
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;
+ (Class)session_message_immutableClassForType:(long long)arg1;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_39cb6be4)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property(readonly, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property(readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(readonly, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ApgPronGuessMessage *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ApgPronGuessMessage *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

