//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIItemResourceRequest, SSVPlatformRequestOperation;

@interface SKUILoadItemResourceOperation
{
    SSVPlatformRequestOperation *_underlyingOperation;
}

@property __weak SSVPlatformRequestOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) SKUIItemResourceRequest *resourceRequest; // @dynamic resourceRequest;

@end

