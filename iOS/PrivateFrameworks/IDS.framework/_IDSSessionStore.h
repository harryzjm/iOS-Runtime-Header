//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface _IDSSessionStore : NSObject
{
    NSMapTable *_sessionBySessionID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *sessionBySessionID; // @synthesize sessionBySessionID=_sessionBySessionID;
- (id)sessionForAccount:(id)arg1 fromID:(id)arg2 identifier:(id)arg3 transportType:(id)arg4;
- (id)init;

@end

