//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCALRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCItemID_v9 : NSObject
{
    BRCALRowID *_appLibraryRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
- (void).cxx_destruct;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1 enclosureUUID:(id)arg2;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUIDObject:(struct _UUIDItemObject_OLD *)arg1;
- (id)initWithRootObject:(struct RootItemObject *)arg1;
- (id)initWithUUID:(const char *)arg1;
- (id)itemIDString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

