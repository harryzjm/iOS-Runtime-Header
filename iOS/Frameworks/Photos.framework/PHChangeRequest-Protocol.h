//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSManagedObjectID, NSObject, NSSet, NSString;
@protocol OS_xpc_object;

@protocol PHChangeRequest <NSObject>
@property(readonly, nonatomic) int clientProcessID;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCDict:(NSObject<OS_xpc_object> *)arg1 clientEntitlements:(NSSet *)arg2 clientName:(NSString *)arg3 clientBundleID:(NSString *)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(NSString *)arg1 objectID:(NSManagedObjectID *)arg2;
@end

