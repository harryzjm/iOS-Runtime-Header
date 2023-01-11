//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NEIKEv2AuthenticationProtocol, NEIKEv2DHProtocol, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NEIKEv2PRFProtocol, NSArray;

@interface NEIKEv2IKESAProposal : NSObject <NSCopying>
{
    unsigned char _proposalNumber;
    NSArray *_encryptionProtocols;
    NSArray *_integrityProtocols;
    NSArray *_prfProtocols;
    NSArray *_dhProtocols;
    NSArray *_eapProtocols;
    unsigned long long _lifetimeSeconds;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}

@property(retain, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol; // @synthesize authenticationProtocol=_authenticationProtocol;
@property(retain) NEIKEv2DHProtocol *chosenDHProtocol; // @synthesize chosenDHProtocol=_chosenDHProtocol;
@property(retain) NEIKEv2PRFProtocol *chosenPRFProtocol; // @synthesize chosenPRFProtocol=_chosenPRFProtocol;
@property(retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol; // @synthesize chosenIntegrityProtocol=_chosenIntegrityProtocol;
@property(retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol; // @synthesize chosenEncryptionProtocol=_chosenEncryptionProtocol;
@property unsigned char proposalNumber; // @synthesize proposalNumber=_proposalNumber;
@property unsigned long long lifetimeSeconds; // @synthesize lifetimeSeconds=_lifetimeSeconds;
@property(retain) NSArray *eapProtocols; // @synthesize eapProtocols=_eapProtocols;
@property(retain) NSArray *dhProtocols; // @synthesize dhProtocols=_dhProtocols;
@property(retain) NSArray *prfProtocols; // @synthesize prfProtocols=_prfProtocols;
@property(retain) NSArray *integrityProtocols; // @synthesize integrityProtocols=_integrityProtocols;
@property(retain) NSArray *encryptionProtocols; // @synthesize encryptionProtocols=_encryptionProtocols;
- (void).cxx_destruct;
- (_Bool)isAValidResponse;
- (unsigned long long)lifetimeSecondsBeyondSoftLifetimeForInitiator:(_Bool)arg1;
- (unsigned long long)softLifetimeSecondsForInitiator:(_Bool)arg1;
- (_Bool)matchesProposal:(id)arg1;
- (id)copyFromRemote:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) _Bool hasEAPMethods;
@property(readonly) NEIKEv2DHProtocol *dhProtocol;
@property(readonly) NEIKEv2PRFProtocol *prfProtocol;
@property(readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property(readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;

@end
