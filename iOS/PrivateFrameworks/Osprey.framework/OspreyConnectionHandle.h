//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyConnectionHandle : NSObject
{
    CDUnknownBlockType _willRelease;
    id _connectionKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id connectionKey; // @synthesize connectionKey=_connectionKey;
- (void)dealloc;
- (id)initWithConnectionKey:(id)arg1 willRelease:(CDUnknownBlockType)arg2;

@end
