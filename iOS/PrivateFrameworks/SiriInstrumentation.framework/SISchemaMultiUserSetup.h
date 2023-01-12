//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaMultiUserSetup
{
    unsigned int _numGuestsAccepted;
    unsigned int _numParticipantsWithTrust;
    unsigned int _numUsersWhoSyncedRecognizeMyVoice;
    unsigned int _numUsersWithRecognizeMyVoiceEnabled;
    unsigned int _numVoiceProfilesAvailable;
    struct {
        unsigned int numGuestsAccepted:1;
        unsigned int numParticipantsWithTrust:1;
        unsigned int numUsersWhoSyncedRecognizeMyVoice:1;
        unsigned int numUsersWithRecognizeMyVoiceEnabled:1;
        unsigned int numVoiceProfilesAvailable:1;
    } _has;
}

@property(nonatomic) unsigned int numVoiceProfilesAvailable; // @synthesize numVoiceProfilesAvailable=_numVoiceProfilesAvailable;
@property(nonatomic) unsigned int numUsersWithRecognizeMyVoiceEnabled; // @synthesize numUsersWithRecognizeMyVoiceEnabled=_numUsersWithRecognizeMyVoiceEnabled;
@property(nonatomic) unsigned int numUsersWhoSyncedRecognizeMyVoice; // @synthesize numUsersWhoSyncedRecognizeMyVoice=_numUsersWhoSyncedRecognizeMyVoice;
@property(nonatomic) unsigned int numParticipantsWithTrust; // @synthesize numParticipantsWithTrust=_numParticipantsWithTrust;
@property(nonatomic) unsigned int numGuestsAccepted; // @synthesize numGuestsAccepted=_numGuestsAccepted;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasNumVoiceProfilesAvailable;
@property(nonatomic) _Bool hasNumUsersWithRecognizeMyVoiceEnabled;
@property(nonatomic) _Bool hasNumUsersWhoSyncedRecognizeMyVoice;
@property(nonatomic) _Bool hasNumParticipantsWithTrust;
@property(nonatomic) _Bool hasNumGuestsAccepted;

@end
