//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SSPlistDataReader : NSObject
{
    struct _MDPlistContainer *_container;
    CDStruct_b7fac349 _obj;
}

- (struct _MDPlistContainer *)container;
- (id)description;
- (double)doubleValueForBundle:(id)arg1;
- (double)doubleValueForKey:(const char *)arg1;
- (_Bool)doesBundleExistInAppWhiteList:(id)arg1;
@property(readonly, nonatomic) NSArray *blacklist;
@property(readonly, copy, nonatomic) NSMutableArray *allKeys;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithPlistContainer:(struct _MDPlistContainer *)arg1;
- (id)initWithPlistContainer:(struct _MDPlistContainer *)arg1 obj:(CDStruct_b7fac349)arg2;

@end

