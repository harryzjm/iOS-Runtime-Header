//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSSet;

@interface FCFetchOperationResult : NSObject
{
    id _fetchedObject;
    unsigned long long _status;
    unsigned long long _fetchResult;
    NSError *_error;
    NSSet *_missingObjectDescriptions;
}

+ (id)resultWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 error:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *missingObjectDescriptions; // @synthesize missingObjectDescriptions=_missingObjectDescriptions;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) id fetchedObject; // @synthesize fetchedObject=_fetchedObject;
@property(readonly, nonatomic) _Bool anyMissingObjects;
- (id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4;

@end
