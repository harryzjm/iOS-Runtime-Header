//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageCriterion, NSIndexSet;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexResultKey : NSObject
{
    MFMessageCriterion *_criterion;
    NSIndexSet *_mailboxIDs;
}

@property(copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;

@end
