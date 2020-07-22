//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TNSheet;

__attribute__((visibility("hidden")))
@interface TNSheetSelection
{
    _Bool mIsPaginated;
    TNSheet *mSheet;
}

+ (id)selectionForSheet:(id)arg1 paginated:(_Bool)arg2;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic, getter=isPaginated) _Bool paginated; // @synthesize paginated=mIsPaginated;
@property(readonly, retain, nonatomic) TNSheet *sheet; // @synthesize sheet=mSheet;
- (id)UUIDDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSheet:(id)arg1 paginated:(_Bool)arg2;

@end

