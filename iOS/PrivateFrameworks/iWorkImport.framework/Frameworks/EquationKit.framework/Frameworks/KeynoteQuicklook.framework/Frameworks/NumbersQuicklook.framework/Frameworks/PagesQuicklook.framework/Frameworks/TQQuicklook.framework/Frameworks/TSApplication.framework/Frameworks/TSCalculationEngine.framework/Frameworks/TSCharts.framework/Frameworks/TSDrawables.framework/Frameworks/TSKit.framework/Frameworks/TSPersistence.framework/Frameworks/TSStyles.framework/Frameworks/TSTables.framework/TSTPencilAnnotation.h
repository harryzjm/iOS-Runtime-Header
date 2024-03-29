//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSString, TSDPencilAnnotationStorage, TSTTableInfo;

@interface TSTPencilAnnotation : TSPObject
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSTTableInfo *_table;
}

+ (_Bool)needsObjectUUID;
- (void).cxx_destruct;
@property(nonatomic) __weak TSTTableInfo *table; // @synthesize table=_table;
@property(readonly, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSUCellRect)_cellRange;
@property(readonly, nonatomic) NSString *uuid;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2 pencilAnnotationStorage:(id)arg3;
- (id)initWithTableInfo:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

