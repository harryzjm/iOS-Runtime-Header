//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKPendingOperationRecord : NSObject
{
    CDUnknownBlockType _operationHandler;
    CDUnknownBlockType _completionHandler;
    long long _errorCount;
}

+ (id)pendingOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType operationHandler; // @synthesize operationHandler=_operationHandler;
- (void).cxx_destruct;

@end
