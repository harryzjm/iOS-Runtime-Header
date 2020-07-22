//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSDDrawableSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedDrawableSelection <TSKArchivedSelection>
{
    TSDDrawableSelection *mDrawableSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mDrawableSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1 intoMessage:(struct DrawableSelectionArchive *)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

