//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUISortDataRequest, SSVLoadURLOperation;

@interface SKUILoadSortDataOperation
{
    SSVLoadURLOperation *_underlyingOperation;
}

@property __weak SSVLoadURLOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) SKUISortDataRequest *resourceRequest; // @dynamic resourceRequest;

@end

