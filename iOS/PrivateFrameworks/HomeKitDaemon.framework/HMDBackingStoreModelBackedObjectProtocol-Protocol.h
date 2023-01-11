//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDBackingStoreModelObject, NSArray, NSUUID;

@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>
@property(readonly, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, nonatomic) NSUUID *modelIdentifier;
- (NSArray *)modelBackedObjects;
- (NSArray *)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (HMDBackingStoreModelObject *)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;

@optional
- (_Bool)isBackingStorageEqual:(id)arg1;
@end

