//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABSAddressBook, NSMutableArray;

@interface ABSChangeCallbacks : NSObject
{
    ABSAddressBook *_addressBook;
    NSMutableArray *_externalCallbacks;
    NSMutableArray *_externalCallBackThreads;
    NSMutableArray *_externalCallbackContexts;
    long long _initialAccessStatus;
}

- (void).cxx_destruct;
- (void)removeExternalCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (_Bool)hasExternalCallback:(CDUnknownFunctionPointerType)arg1 onThread:(id)arg2 withContext:(void *)arg3;
- (void)addExternalCallback:(CDUnknownFunctionPointerType)arg1 onThread:(id)arg2 withContext:(void *)arg3;
- (void)contactStoreChanged:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

@end

