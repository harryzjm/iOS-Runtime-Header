//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface HRUITableViewSectionConfiguration : NSObject
{
    MISSING_TYPE *sections;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (id)rowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)removeAllSections;
- (id)addSectionWithIdentifier:(id)arg1 rowReuseIdentifiers:(id)arg2;
- (id)addSectionWithIdentifier:(id)arg1 firstRowReuseIdentifier:(id)arg2;
- (void)addSection:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSArray *sections;

@end
