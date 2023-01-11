//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FKAddressBook : NSObject
{
    void *_addressBook;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (void)performBlock:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
