//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class ACAccount, NSData;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSAnisetteSyncTask : AMSTask
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSData *_data;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)performSync;
- (id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;

@end

