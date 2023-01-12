//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding>
{
    long long _totalSyncOperations;
    long long _failedSyncOperations;
}

+ (_Bool)supportsSecureCoding;
- (void)clear;
- (void)newSyncOperationWithError:(id)arg1;
- (float)backoffRatio;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
