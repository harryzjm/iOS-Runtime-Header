//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest
{
    NSData *_subCASEResidencyAttestation;
    NSData *_sharingTokenHash;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *sharingTokenHash; // @synthesize sharingTokenHash=_sharingTokenHash;
@property(copy, nonatomic) NSData *subCASEResidencyAttestation; // @synthesize subCASEResidencyAttestation=_subCASEResidencyAttestation;
- (id)initWithRequestData:(id)arg1;

@end
