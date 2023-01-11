//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SATTSStartSpeechSynthesisRequest <SAServerBoundCommand>
{
}

+ (id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechSynthesisRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *voiceName;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) _Bool streaming;
@property(copy, nonatomic) NSDictionary *speakableContextInfo;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(nonatomic) _Bool enableAudioInfo;
@property(copy, nonatomic) NSString *audioType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
