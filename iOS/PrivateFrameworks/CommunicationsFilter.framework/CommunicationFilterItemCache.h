//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CommunicationFilterItem;

__attribute__((visibility("hidden")))
@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property(nonatomic) long long isInList; // @synthesize isInList=_isInList;
- (_Bool)matchesItem:(id)arg1;
- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;

@end

