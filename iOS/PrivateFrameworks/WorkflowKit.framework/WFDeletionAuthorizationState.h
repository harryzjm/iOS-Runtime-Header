//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>
#import <WorkflowKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFDeletionAuthorizationState : NSObject <WFSerializableContent, NSSecureCoding>
{
    NSString *_status;
    NSString *_contentItemClassName;
    NSString *_actionUUID;
    unsigned long long _count;
}

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)stateFromDatabaseData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, copy, nonatomic) NSString *contentItemClassName; // @synthesize contentItemClassName=_contentItemClassName;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
- (id)siriActionToolDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)databaseDataWithError:(id *)arg1;
- (id)deniedPermissionsError;
- (id)localizedExfiltrationRestrictedError;
- (id)stateWithStatus:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithStatus:(id)arg1 contentItemClassName:(id)arg2 actionUUID:(id)arg3 count:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
