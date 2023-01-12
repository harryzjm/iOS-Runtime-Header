//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRE/REMeshPayload-Protocol.h>

@class NSArray, NSObject, RESerializedPayload;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface RESharedMemoryMeshPayload <REMeshPayload>
{
    NSObject<OS_xpc_object> *_data;
    NSArray *_parts;
    NSArray *_models;
    NSArray *_instances;
    CDUnknownBlockType serializedDataBlock;
    RESerializedPayload *serializedData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) RESerializedPayload *serializedData; // @synthesize serializedData;
@property(copy, nonatomic) CDUnknownBlockType serializedDataBlock; // @synthesize serializedDataBlock;
@property(readonly, nonatomic) NSArray *instances; // @synthesize instances=_instances;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
@property(readonly, nonatomic) NSArray *parts; // @synthesize parts=_parts;
- (id)redactedDescription;
- (id)description;
@property(readonly, nonatomic, getter=isShareable) _Bool shareable;
@property(readonly, nonatomic) unsigned long long bufferSize;
- (id)bufferWithDevice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 parts:(id)arg2 models:(id)arg3 instances:(id)arg4;

@end
