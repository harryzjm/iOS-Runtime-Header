//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SASStartSpeech;

@interface SAStartRequest <SAServerBoundCommand>
{
}

+ (id)startRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *utterance;
@property(nonatomic) _Bool textToSpeechIsMuted;
@property(nonatomic) _Bool talkOnly;
@property(retain, nonatomic) SASStartSpeech *sourceSpeechRequest;
@property(copy, nonatomic) NSNumber *motionConfidence;
@property(copy, nonatomic) NSString *motionActivity;
@property(copy, nonatomic) NSNumber *isCarryDevice;
@property(copy, nonatomic) NSString *hardwareBuild;
@property(nonatomic) _Bool handsFree;
@property(nonatomic) _Bool eyesFree;
@property(nonatomic) _Bool clearContext;
@property(copy, nonatomic) NSString *origin;
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

