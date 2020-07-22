//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSMutableArray, NSString, NSURL, SiriCoreLocalSpeechUserData;
@protocol OS_dispatch_queue;

@interface SiriCoreLocalSpeechDESRecord : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    SiriCoreLocalSpeechUserData *_userData;
    NSString *_language;
    NSString *_task;
    NSArray *_context;
    unsigned long long _samplingRate;
    NSData *_profile;
    NSMutableArray *_audioPackets;
    NSString *_UUIDString;
    NSURL *_originalAudioFileURL;
}

+ (id)recordsWithLanguage:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)DeleteAllRecordsWithCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSURL *originalAudioFileURL; // @synthesize originalAudioFileURL=_originalAudioFileURL;
@property(readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(readonly, copy, nonatomic) NSMutableArray *audioPackets; // @synthesize audioPackets=_audioPackets;
@property(copy, nonatomic) NSData *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) unsigned long long samplingRate; // @synthesize samplingRate=_samplingRate;
@property(readonly, copy, nonatomic) NSArray *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *task; // @synthesize task=_task;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) SiriCoreLocalSpeechUserData *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (id)recordData;
- (id)recordInfo;
- (void)writeToFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)addAudioPacket:(id)arg1;
- (id)initWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(_Bool)arg4;
- (id)_init;

@end
