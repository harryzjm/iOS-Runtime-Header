//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface HMFCache
{
    _Bool _exists;
    NSURL *_URL;
}

+ (id)defaultCache;
@property(readonly, getter=isExists) _Bool exists; // @synthesize exists=_exists;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)init;

@end
