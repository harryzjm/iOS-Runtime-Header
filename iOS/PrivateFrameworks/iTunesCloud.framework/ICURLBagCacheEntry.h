//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICURLBag;

@interface ICURLBagCacheEntry : NSObject
{
    double _expirationTime;
    ICURLBag *_urlBag;
}

@property(retain) ICURLBag *urlBag; // @synthesize urlBag=_urlBag;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
- (void).cxx_destruct;
- (id)initWithURLBag:(id)arg1 expirationTime:(double)arg2;

@end

