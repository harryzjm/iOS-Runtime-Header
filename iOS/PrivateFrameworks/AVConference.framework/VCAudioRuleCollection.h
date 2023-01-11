//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioRuleCollection : NSObject <NSCopying>
{
    NSMutableArray *_rules;
    int _deviceRole;
    _Bool _allowAudioSwitching;
    _Bool _allowAudioRecording;
    int _aacBlockSize;
    NSMutableArray *_secondaryPayloads;
}

+ (int)getForcedPayload;
@property(nonatomic) int aacBlockSize; // @synthesize aacBlockSize=_aacBlockSize;
@property(nonatomic) _Bool allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(readonly, nonatomic) NSArray *secondaryPayloads; // @synthesize secondaryPayloads=_secondaryPayloads;
@property(readonly, nonatomic) NSArray *rules; // @synthesize rules=_rules;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isPayloadSupported:(int)arg1;
- (void)clearAudioRules;
- (void)addAudioRules:(id)arg1;
- (void)addAudioRule:(id)arg1;
- (void)setRules:(id)arg1;
- (void)setupAudioRulesWithSBR:(_Bool)arg1 isContinuity:(_Bool)arg2;
- (void)addAudioPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3;
- (void)dealloc;
- (id)initPrimaryPayload:(int)arg1 dtxPayload:(int)arg2 redPayload:(int)arg3 secondaryPayloads:(id)arg4 allowAudioSwitching:(_Bool)arg5 sbr:(_Bool)arg6 aacBlockSize:(int)arg7;
- (id)initWithPhoneContinuity:(_Bool)arg1 allowAudioSwitching:(_Bool)arg2 sbr:(_Bool)arg3 aacBlockSize:(int)arg4;
- (id)init;

@end

