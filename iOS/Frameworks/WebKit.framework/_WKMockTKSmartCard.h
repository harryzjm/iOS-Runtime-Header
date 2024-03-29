//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CryptoTokenKit/TKSmartCard.h>

__attribute__((visibility("hidden")))
@interface _WKMockTKSmartCard : TKSmartCard
{
    struct WeakPtr<WebKit::MockCcidService, WTF::DefaultWeakPtrImpl> m_service;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)endSession;
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;
- (id)initWithService:(void *)arg1;

@end

