//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCAutoPlayEnumerationResult2 : NSObject
{
    NSString *_sectionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier;
- (id)trackingEntryResult;
- (id)itemResult;
@property(readonly, nonatomic) long long entryType;
@property(readonly, nonatomic) long long branchDepth;
- (id)initWithSectionIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

