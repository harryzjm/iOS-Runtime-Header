//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject
{
    TSTLayoutHint *mHint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSTLayoutHint *hint; // @synthesize hint=mHint;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

