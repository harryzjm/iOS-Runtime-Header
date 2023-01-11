//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerStatusObserving-Protocol.h>

@class NSError, NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerStatusObserver : NSObject <SVPlayerStatusObserving>
{
    CDUnknownBlockType changeBlock;
    NSError *_error;
    SVPlayer *_player;
    SVKeyValueObserver *_statusObserver;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) SVKeyValueObserver *statusObserver; // @synthesize statusObserver=_statusObserver;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

