//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSUUID, __CFN_SessionMetrics, __CFN_TransactionMetrics;

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;
    _Bool _completed;
    _Bool _ignoreNextRedirection;
    __CFN_SessionMetrics *_sessionMetrics;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSMutableArray *_transactionMetrics;
    double _createTime;
    double _firstResumeTime;
    double _completeTime;
    long long _options;
    long long _schedulingTier;
    __CFN_TransactionMetrics *_currentTransactionMetrics;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;
@property(retain, nonatomic) NSMutableArray *_daemon_transactionMetrics;

@end
