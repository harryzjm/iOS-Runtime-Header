//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCFuture;

__attribute__((visibility("hidden")))
@interface MPCFutureInvalidationToken : NSObject
{
    MPCFuture *_future;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPCFuture *future; // @synthesize future=_future;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

