//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMBulletinObjectTuple : NSObject
{
    NSString *_queryName;
    NSString *_uuidString;
}

+ (id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2;
@property(readonly, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(readonly, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
- (void).cxx_destruct;
- (id)initWithQueryType:(long long)arg1 uuidString:(id)arg2;

@end

