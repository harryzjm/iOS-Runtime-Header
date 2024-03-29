//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class ICStoreURLRequest, NSObject;
@protocol MPStoreSocialRequestOperationDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPStoreSocialRequestOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_request;
    id <MPStoreSocialRequestOperationDataSource> _dataSource;
    CDUnknownBlockType _responseHandler;
}

+ (id)_urlStringForKey:(id)arg1 inBag:(id)arg2;
+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;
+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) id <MPStoreSocialRequestOperationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_requestURLFromBag:(id)arg1;
- (void)execute;
- (void)cancel;
- (id)initWithDataSource:(id)arg1;

@end

