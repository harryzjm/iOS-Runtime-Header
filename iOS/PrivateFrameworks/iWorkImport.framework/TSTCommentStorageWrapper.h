//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSString, TSDCommentStorage;

__attribute__((visibility("hidden")))
@interface TSTCommentStorageWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>
{
    TSDCommentStorage *_commentStorage;
}

+ (id)cellDiffProperties;
@property(readonly, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
- (void).cxx_destruct;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)applyToCell:(id)arg1;
- (void)didInitFromSOS;
- (id)initWithCommentStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
