//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying>
{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
    _Bool _isAppendingSectionInsert;
    NSUUID *_identifier;
}

@property(nonatomic) _Bool isAppendingSectionInsert; // @synthesize isAppendingSectionInsert=_isAppendingSectionInsert;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (void).cxx_destruct;
- (_Bool)isNOOP;
- (_Bool)isEqualToUpdate:(id)arg1;
- (_Bool)isRevertedUpdateOf:(id)arg1;
- (id)revertedUpdate;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
@property(readonly, nonatomic, getter=_isSectionOperation) _Bool isSectionOperation;
@property(readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property(readonly, nonatomic, getter=_action) long long action;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;

@end

