//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, TSPObjectContext;

@interface TSPObjectSerializationWriteAssistant : NSObject
{
    TSPObjectContext *_context;
    NSUUID *_documentUUID;
    NSUUID *_versionUUID;
    _Bool _serializeWeakAsStrongReferences;
}

- (void).cxx_destruct;
- (_Bool)skipMetadataObjectSerialization;
- (id)createMetadataForRootObject:(id)arg1 readVersion:(unsigned long long)arg2 dataArchiver:(id)arg3 archivedObjects:(id)arg4 componentObjectUUIDMap:(id)arg5 externalReferences:(id)arg6 weakExternalReferences:(id)arg7 lazyReferences:(id)arg8 dataReferences:(id)arg9 error:(id *)arg10;
- (long long)componentWriterMode;
- (unsigned long long)objectTargetType;
- (void)encodeObject:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

