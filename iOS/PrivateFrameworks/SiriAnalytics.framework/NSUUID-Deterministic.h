//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (Deterministic)
+ (id)sa_deterministicUUIDv5ForNamespace:(id)arg1 name:(id)arg2;
+ (id)sa_deterministicUUIDv5ForNamespaceUUID:(id)arg1 sourceUUID:(id)arg2;
- (id)sa_uuidBytes;
@end

