//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentCredentialUnion *_credential;
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *_manualEntryStepContext;
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;
    _Bool _allowsAddingDifferentCard;
    struct {
        unsigned int allowsAddingDifferentCard:1;
    } _has;
}

@property(nonatomic) _Bool allowsAddingDifferentCard; // @synthesize allowsAddingDifferentCard=_allowsAddingDifferentCard;
@property(retain, nonatomic) NPKProtoStandalonePaymentCredentialUnion *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // @synthesize manualEntryStepContext=_manualEntryStepContext;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAllowsAddingDifferentCard;
@property(readonly, nonatomic) _Bool hasCredential;
@property(readonly, nonatomic) _Bool hasRemoteCredential;

@end
