//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableString, NSString;

@interface PHASETapDescription : NSObject
{
    NSMutableString *_uidString;
    unsigned int _audioSessionToken;
    int _processIdentifier;
    long long _type;
    long long _binding;
    long long _streamType;
    NSString *_sceneIdentifier;
    AVAudioFormat *_format;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) unsigned int audioSessionToken; // @synthesize audioSessionToken=_audioSessionToken;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) long long binding; // @synthesize binding=_binding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *uidString;
- (id)initWithStreamType:(long long)arg1 tapType:(long long)arg2;
- (id)initWithSceneIdentifier:(id)arg1 tapType:(long long)arg2;
- (id)initWithAudioSessionToken:(unsigned int)arg1 tapType:(long long)arg2;
- (id)initWithProcessIdentifier:(int)arg1 tapType:(long long)arg2;
- (id)initSystemTapOfType:(long long)arg1;
- (id)initInternalWithType:(long long)arg1;

@end
