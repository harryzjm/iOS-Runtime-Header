//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPFetcherResponse : NSObject
{
    long long _state;
    id _userData;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)initWithState:(long long)arg1 fetcher:(id)arg2;

@end

