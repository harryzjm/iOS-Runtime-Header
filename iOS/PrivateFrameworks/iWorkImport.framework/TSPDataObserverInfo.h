//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface TSPDataObserverInfo : NSObject
{
    id _observer;
    TSPData *_data;
    CDUnknownBlockType _completionHandler;
    _Bool _isInternalObserver;
    unsigned long long _options;
}

@property(readonly, nonatomic) _Bool isInternalObserver; // @synthesize isInternalObserver=_isInternalObserver;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)notifyWithStatus:(long long)arg1 info:(id)arg2;
- (_Bool)shouldClearObserverForStatus:(long long)arg1;
- (_Bool)shouldNotifyStatus:(long long)arg1;
- (id)initWithObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

