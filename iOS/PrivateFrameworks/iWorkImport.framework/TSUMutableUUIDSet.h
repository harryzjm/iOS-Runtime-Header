//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSUMutableUUIDSet
{
}

- (void)removeUuidsFromVector:(const vector_dadc1b26 *)arg1;
- (void)removeUuidsFromSet:(id)arg1;
- (void)addUuidsFromVector:(const vector_dadc1b26 *)arg1;
- (void)addUuidsFromSet:(id)arg1;
- (void)removeUUIDs:(const unordered_set_3f00ed57 *)arg1;
- (void)addUUIDs:(const unordered_set_3f00ed57 *)arg1;
- (_Bool)removeUUID:(const UUIDData_5fbc143e *)arg1;
- (_Bool)addUUID:(const UUIDData_5fbc143e *)arg1;
- (void)removeAllUuids;

@end

