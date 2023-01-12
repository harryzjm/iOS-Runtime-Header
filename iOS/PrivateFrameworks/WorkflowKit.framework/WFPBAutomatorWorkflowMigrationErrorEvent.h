//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBAutomatorWorkflowMigrationErrorEvent : PBCodable <NSCopying>
{
    NSString *_automatorActionIdentifier;
    NSString *_errorDescription;
    NSString *_key;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *automatorActionIdentifier; // @synthesize automatorActionIdentifier=_automatorActionIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(readonly, nonatomic) _Bool hasAutomatorActionIdentifier;
@property(readonly, nonatomic) _Bool hasKey;

@end
