//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GSStorageManager : NSObject
{
}

+ (_Bool)_isPermanentStorageSupportedForFD:(int)arg1 error:(id *)arg2;
+ (_Bool)_isPermanentStorageSupportedForStatFSInfo:(struct statfs *)arg1 error:(id *)arg2;
+ (id)manager;
+ (void)initialize;
- (_Bool)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id *)arg2;
- (_Bool)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id *)arg2;
- (_Bool)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)removeTemporaryStorage:(id)arg1 error:(id *)arg2;
- (id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id *)arg3;
- (id)persistentIdentifierInStorage:(struct NSObject *)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3;
- (id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id *)arg3;
- (void)_connectionWithDaemonWasLost;
- (id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(_Bool)arg2 error:(id *)arg3;
- (id)stagingPrefixForDocumentID:(id)arg1;
- (_Bool)isPermanentStorageSupportedAtURL:(id)arg1 error:(id *)arg2;

@end
