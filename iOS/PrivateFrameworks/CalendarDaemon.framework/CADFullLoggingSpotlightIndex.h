//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CADSpotlightIndex;

__attribute__((visibility("hidden")))
@interface CADFullLoggingSpotlightIndex : NSObject
{
    id <CADSpotlightIndex> _wrappedIndex;
}

- (void).cxx_destruct;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIndex:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

