//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerTimeControlStatusObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerProviding;

@interface SVPlayerTimeControlStatusObserverFactory : NSObject <SVPlayerTimeControlStatusObserverFactory>
{
    id <SVPlayerProviding> _playerProvider;
}

@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
- (void).cxx_destruct;
- (id)createTimeControlStatusObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

