//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, PKCloudStoreRecord;

@protocol PKCloudStoreCoding <NSSecureCoding>
+ (NSString *)recordNamePrefix;
- (void)applyPropertiesFromCloudStoreRecord:(PKCloudStoreRecord *)arg1;
- (NSString *)primaryIdentifier;
- (unsigned long long)itemType;
- (NSArray *)recordTypesAndNamesIncludingServerData:(_Bool)arg1;
- (void)encodeWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (id)initWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;

@optional
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
@end
