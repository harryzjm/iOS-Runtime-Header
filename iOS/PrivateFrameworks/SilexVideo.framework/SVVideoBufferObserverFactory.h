//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoBufferObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserverFactory;

@interface SVVideoBufferObserverFactory : NSObject <SVVideoBufferObserverFactory>
{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
}

@property(readonly, nonatomic) id <SVPlayerItemObserverFactory> playerItemObserverFactory; // @synthesize playerItemObserverFactory=_playerItemObserverFactory;
- (void).cxx_destruct;
- (id)createBufferObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

