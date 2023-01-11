//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoCheckPasscodePolicyComplianceRequest : PBRequest <NSCopying>
{
    int _enforcedPolicy;
    _Bool _applyRestrictions;
    struct {
        unsigned int enforcedPolicy:1;
        unsigned int applyRestrictions:1;
    } _has;
}

@property(nonatomic) _Bool applyRestrictions; // @synthesize applyRestrictions=_applyRestrictions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasApplyRestrictions;
- (int)StringAsEnforcedPolicy:(id)arg1;
- (id)enforcedPolicyAsString:(int)arg1;
@property(nonatomic) _Bool hasEnforcedPolicy;
@property(nonatomic) int enforcedPolicy; // @synthesize enforcedPolicy=_enforcedPolicy;

@end
