//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSString, TSKSelection;

@interface TSDArchivedCanvasSelection : TSPObject
{
    TSKSelection *_selection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=_selection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

