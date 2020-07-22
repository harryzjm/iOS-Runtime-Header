//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BookmarkDAVDatabaseLockArbiter : NSObject
{
    long long _databaseLockCount;
    const void *_databaseRef;
}

@property(readonly, nonatomic) const void *databaseRef; // @synthesize databaseRef=_databaseRef;
- (void)unlockForClient:(id)arg1;
- (_Bool)lockForClient:(id)arg1;
- (void)dealloc;

@end
