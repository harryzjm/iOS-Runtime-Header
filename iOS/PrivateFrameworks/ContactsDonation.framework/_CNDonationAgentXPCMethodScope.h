//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNPromise;
@protocol DonationAgentProtocol;

@interface _CNDonationAgentXPCMethodScope : NSObject
{
    id <DonationAgentProtocol> _proxy;
    CNPromise *_promise;
}

@property(readonly, nonatomic) CNPromise *promise; // @synthesize promise=_promise;
@property(readonly, nonatomic) id <DonationAgentProtocol> proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (id)initWithPromise:(id)arg1 proxy:(id)arg2;
- (id)init;

@end
