//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSPSharedTripPeer : NSObject
{
    _Bool _canControlSharing;
    _Bool _canControlReceiving;
}

@property(readonly, nonatomic) _Bool canControlReceiving; // @synthesize canControlReceiving=_canControlReceiving;
@property(readonly, nonatomic) _Bool canControlSharing; // @synthesize canControlSharing=_canControlSharing;
- (id)initWithConnection:(id)arg1;

@end
