//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NPKOSTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_name;
}

+ (id)transactionWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithName:(id)arg1;

@end
