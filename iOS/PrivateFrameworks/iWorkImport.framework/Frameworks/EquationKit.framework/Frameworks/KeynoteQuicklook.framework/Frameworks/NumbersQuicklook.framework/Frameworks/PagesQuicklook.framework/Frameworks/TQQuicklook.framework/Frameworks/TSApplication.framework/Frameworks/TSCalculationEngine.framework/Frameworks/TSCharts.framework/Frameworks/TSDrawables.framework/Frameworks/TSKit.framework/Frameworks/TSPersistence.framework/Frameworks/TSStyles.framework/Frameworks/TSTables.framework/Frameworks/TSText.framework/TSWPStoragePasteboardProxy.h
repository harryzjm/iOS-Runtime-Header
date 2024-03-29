//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class TSWPStorage;
@protocol TSWPStyleProvider;

@interface TSWPStoragePasteboardProxy : TSPObject
{
    TSWPStorage *_storage;
    struct _NSRange _range;
    id <TSWPStyleProvider> _styleProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange storageRange; // @synthesize storageRange=_range;
- (void)saveToArchiver:(id)arg1;
- (id)initWithContext:(id)arg1 storage:(id)arg2 range:(struct _NSRange)arg3 styleProvider:(id)arg4;

@end

