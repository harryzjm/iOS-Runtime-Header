//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCFSRooted-Protocol.h>

__attribute__((visibility("hidden")))
@interface BRCZoneRootItem <BRCFSRooted>
{
}

- (id)st;
- (id)parentItemID;
- (id)parentItemOnFS;
- (id)fileID;
- (_Bool)saveToDB;
- (_Bool)isZoneRoot;
- (struct BRCDirectoryItem *)asFSRoot;
- (_Bool)isFSRoot;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;

@end
