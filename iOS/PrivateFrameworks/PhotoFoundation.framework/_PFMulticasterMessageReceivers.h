//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFMulticasterDistributionList-Protocol.h>

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList>
{
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

- (void).cxx_destruct;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2;

@end
