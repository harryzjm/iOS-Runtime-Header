//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class NSString, _BPSWindowerInner;
@protocol NSCopying;

@interface _BPSWindowerSide <BPSSubscriber>
{
    _BPSWindowerInner *_windowerInner;
    id <NSCopying> _key;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <NSCopying> key; // @synthesize key=_key;
@property(readonly, nonatomic) _BPSWindowerInner *windowerInner; // @synthesize windowerInner=_windowerInner;
- (void)requestDemand:(long long)arg1;
- (void)cancel;
- (void)receiveSubscription:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveCompletion:(id)arg1;
- (id)initWithKey:(id)arg1 identifier:(id)arg2 windowerInner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
