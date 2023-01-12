//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface CNAvatarCacheChangeAnalysis : NSObject
{
    NSData *_currentChangeHistoryToken;
    NSArray *_identifiersOfAffectedContacts;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *identifiersOfAffectedContacts; // @synthesize identifiersOfAffectedContacts=_identifiersOfAffectedContacts;
@property(readonly, copy, nonatomic) NSData *currentChangeHistoryToken; // @synthesize currentChangeHistoryToken=_currentChangeHistoryToken;
- (id)description;
- (id)initWithCurrentChangeHistoryToken:(id)arg1 identifiersOfAffectedContacts:(id)arg2;

@end
