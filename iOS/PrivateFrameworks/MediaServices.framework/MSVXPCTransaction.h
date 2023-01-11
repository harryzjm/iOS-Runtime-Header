//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol OS_os_transaction;

@interface MSVXPCTransaction : NSObject
{
    NSUUID *_identifier;
    NSObject<OS_os_transaction> *_transaction;
    long long _transactionCount;
    NSString *_name;
}

+ (id)activeTransactions;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)endTransactionOnDate:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)description;
- (id)initWithName:(id)arg1;

@end
