//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, _DKChangeSet;

@interface _DKLocalChangeSets : NSObject
{
    _DKChangeSet *_additionChangeSet;
    _DKChangeSet *_deletionChangeSet;
    NSDate *_queryStartDate;
}

@property(retain, nonatomic) NSDate *queryStartDate; // @synthesize queryStartDate=_queryStartDate;
@property(retain, nonatomic) _DKChangeSet *deletionChangeSet; // @synthesize deletionChangeSet=_deletionChangeSet;
@property(retain, nonatomic) _DKChangeSet *additionChangeSet; // @synthesize additionChangeSet=_additionChangeSet;
- (void).cxx_destruct;
- (id)initWithAdditionChangeSet:(id)arg1 deletionChangeSet:(id)arg2 queryStartDate:(id)arg3;

@end

