//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSUMutableUUIDSet
{
}

- (void)removeUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (void)removeUuidsFromSet:(id)arg1;
- (void)addUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (void)addUuidsFromSet:(id)arg1;
- (void)removeUUIDs:(const unordered_set_c6a929bd *)arg1;
- (void)addUUIDs:(const unordered_set_c6a929bd *)arg1;
- (_Bool)removeUUID:(const UUIDData_60906e89 *)arg1;
- (_Bool)addUUID:(const UUIDData_60906e89 *)arg1;
- (void)removeAllUuids;

@end

