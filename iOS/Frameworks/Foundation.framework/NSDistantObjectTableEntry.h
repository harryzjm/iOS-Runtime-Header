//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConnection, NSDistantObject;

__attribute__((visibility("hidden")))
@interface NSDistantObjectTableEntry : NSObject
{
    NSConnection *_conn;
    NSDistantObject *_proxy;
    id _localObject;
    unsigned int _wireID;
}

- (id)description;
- (void)dealloc;

@end

