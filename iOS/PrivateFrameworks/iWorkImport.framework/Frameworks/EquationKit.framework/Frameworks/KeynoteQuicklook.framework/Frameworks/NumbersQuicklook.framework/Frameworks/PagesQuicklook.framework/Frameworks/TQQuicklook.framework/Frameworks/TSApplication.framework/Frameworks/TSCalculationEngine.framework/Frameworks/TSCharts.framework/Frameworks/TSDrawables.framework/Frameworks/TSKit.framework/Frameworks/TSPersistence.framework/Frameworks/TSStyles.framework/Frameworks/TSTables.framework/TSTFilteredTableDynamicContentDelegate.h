//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSTTableInfo;

@interface TSTFilteredTableDynamicContentDelegate : NSObject
{
    TSTTableInfo *_tableInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (_Bool)dynamicContentMustDrawOnMainThread;
- (_Bool)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (id)initWithTableInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

