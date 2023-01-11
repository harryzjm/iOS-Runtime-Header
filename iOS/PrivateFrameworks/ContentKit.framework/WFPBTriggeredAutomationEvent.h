//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying>
{
    NSString *_key;
    NSString *_triggerType;
    _Bool _requiredRuntimeConfirmation;
    struct {
        unsigned int requiredRuntimeConfirmation:1;
    } _has;
}

@property(nonatomic) _Bool requiredRuntimeConfirmation; // @synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation;
@property(retain, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(nonatomic) _Bool hasRequiredRuntimeConfirmation;
@property(readonly, nonatomic) _Bool hasTriggerType;
@property(readonly, nonatomic) _Bool hasKey;

@end
