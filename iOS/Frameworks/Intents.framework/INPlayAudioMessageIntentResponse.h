//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPlayAudioMessageIntentResponseExport-Protocol.h>

@class NSString, _INPBPlayAudioMessageIntentResponse;

@interface INPlayAudioMessageIntentResponse <INPlayAudioMessageIntentResponseExport>
{
    _INPBPlayAudioMessageIntentResponse *_responseMessagePBRepresentation;
}

+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)setPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
- (id)_responseMessagePBRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

