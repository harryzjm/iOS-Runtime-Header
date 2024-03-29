//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject
{
    void *_parent;
    long long _expectedContentSize;
    struct RetainPtr<NSData> _data;
    _Bool _complete;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _requests;
    struct Lock _dataLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)fulfillRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (void)enqueueRequest:(id)arg1;
- (_Bool)canFulfillRequest:(id)arg1;
- (void)updateData:(id)arg1 complete:(_Bool)arg2;
- (void)setExpectedContentSize:(long long)arg1;
@property(readonly) NSData *data;
- (id)initWithParent:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

