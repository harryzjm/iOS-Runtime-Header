//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSyncEntityIdentifier;

@protocol HDSyncAnchorMap <NSObject>
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (unsigned long long)anchorCount;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(void (^)(HDSyncEntityIdentifier *, long long, _Bool *))arg1;
- (long long)anchorForSyncEntityIdentifier:(HDSyncEntityIdentifier *)arg1;
@end

