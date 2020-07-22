//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SAUIAudioData;
@protocol SAAceSerializable;

@interface SAUISayIt
{
}

+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sayIt;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *dialogIdentifier;
@property(retain, nonatomic) id <SAAceSerializable> context;
@property(retain, nonatomic) SAUIAudioData *audioData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
