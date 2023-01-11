//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PrivateFederatedLearning/CKCodeOperationMessageMutation-Protocol.h>
#import <PrivateFederatedLearning/NSCopying-Protocol.h>

@class NSString;

@interface PFLFetchModelRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>
{
    NSString *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasTaskId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
