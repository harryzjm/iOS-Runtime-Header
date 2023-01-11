//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest <SSXPCCoding>
{
    _Bool _shouldInvalidateLocalCache;
    NSArray *_contentTasteItemUpdates;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldInvalidateLocalCache; // @synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache;
@property(copy, nonatomic) NSArray *contentTasteItemUpdates; // @synthesize contentTasteItemUpdates=_contentTasteItemUpdates;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
