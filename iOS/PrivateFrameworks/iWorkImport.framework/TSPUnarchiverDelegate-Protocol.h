//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSUUID, TSPComponent, TSPData, TSPLazyReference, TSPUnarchiver;

@protocol TSPUnarchiverDelegate <NSObject>
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool didFinishResolvingReferences;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
@property(readonly, nonatomic) long long componentIdentifier;
- (TSPData *)dataForIdentifier:(long long)arg1;
- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(_Bool *)arg3;

@optional
@property(readonly, nonatomic) TSPComponent *component;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@end

