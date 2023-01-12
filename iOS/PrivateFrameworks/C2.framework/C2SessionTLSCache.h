//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class C2Session, NSString;

__attribute__((visibility("hidden")))
@interface C2SessionTLSCache : NSObject
{
    C2Session *_pinnedSession;
    C2Session *_unpinnedSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) C2Session *unpinnedSession; // @synthesize unpinnedSession=_unpinnedSession;
@property(retain, nonatomic) C2Session *pinnedSession; // @synthesize pinnedSession=_pinnedSession;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)underlyingDelegateQueue;
- (id)sessionForOptions:(id)arg1;
- (id)_createSessionWithTLSPinning:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

