//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheGroup, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject
{
    NSString *_recordName;
    NSUUID *_uuid;
    NSUUID *_parentUuid;
    NSString *_type;
    HMDBackingStoreCacheGroup *_group;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, copy) NSString *description;
- (id)initWithGroup:(id)arg1 recordName:(id)arg2 uuid:(id)arg3 parentUuid:(id)arg4 type:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

