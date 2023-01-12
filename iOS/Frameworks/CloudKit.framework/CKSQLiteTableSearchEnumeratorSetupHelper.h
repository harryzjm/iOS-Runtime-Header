//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSPredicate;

@interface CKSQLiteTableSearchEnumeratorSetupHelper : NSObject
{
    NSMutableArray *_orderByProperties;
    NSArray *_fetchedProperties;
    NSArray *_searchProperties;
    NSPredicate *_searchPredicate;
    NSNumber *_limit;
    NSNumber *_offset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property(retain, nonatomic) NSArray *searchProperties; // @synthesize searchProperties=_searchProperties;
@property(retain, nonatomic) NSArray *fetchedProperties; // @synthesize fetchedProperties=_fetchedProperties;
- (void)setupStatement:(id)arg1;
- (void)orderDescendingByProperty:(id)arg1;
- (void)orderAscendingByProperty:(id)arg1;

@end

