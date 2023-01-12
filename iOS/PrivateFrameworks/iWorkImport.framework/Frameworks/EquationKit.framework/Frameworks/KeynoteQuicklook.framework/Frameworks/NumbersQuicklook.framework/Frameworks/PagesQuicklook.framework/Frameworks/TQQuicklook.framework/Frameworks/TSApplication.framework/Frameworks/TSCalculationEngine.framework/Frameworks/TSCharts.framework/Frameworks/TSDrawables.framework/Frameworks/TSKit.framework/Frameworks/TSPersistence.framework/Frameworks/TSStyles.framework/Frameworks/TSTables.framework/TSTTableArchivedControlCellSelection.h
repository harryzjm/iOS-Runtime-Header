//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSString, TSKSelection, TSTTableControlCellSelection;

@interface TSTTableArchivedControlCellSelection : TSPObject
{
    TSTTableControlCellSelection *_controlCellSelection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSTTableControlCellSelection *controlCellSelection; // @synthesize controlCellSelection=_controlCellSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

