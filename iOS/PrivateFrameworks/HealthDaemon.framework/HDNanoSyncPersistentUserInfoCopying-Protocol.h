//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, PBCodable;

@protocol HDNanoSyncPersistentUserInfoCopying <NSObject>
+ (NSString *)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(NSDictionary *)arg1;
- (PBCodable *)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(NSMutableDictionary *)arg1;
- (id)initWithData:(NSData *)arg1;
@end

