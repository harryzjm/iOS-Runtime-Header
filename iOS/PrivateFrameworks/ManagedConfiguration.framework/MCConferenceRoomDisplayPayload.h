//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MCConferenceRoomDisplayPayload
{
    NSString *_customMessage;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
