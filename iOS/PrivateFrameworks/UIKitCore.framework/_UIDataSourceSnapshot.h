//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

@class NSString, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot>
{
    _UIDataSourceSnapshotter *_snapshotter;
}

- (void).cxx_destruct;
- (long long)sectionForGlobalIndex:(long long)arg1;
- (struct _NSRange)rangeForSection:(long long)arg1;
- (long long)numberOfItems;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (long long)globalIndexForIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithDataSourceSnapshotter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
