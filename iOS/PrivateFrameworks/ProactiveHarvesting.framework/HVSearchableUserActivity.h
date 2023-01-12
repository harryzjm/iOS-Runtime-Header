//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveHarvesting/BMIdentifiableContentEvent-Protocol.h>

@class CSSearchableItem, NSString, NSUserActivity;

@interface HVSearchableUserActivity : NSObject <BMIdentifiableContentEvent>
{
    NSString *_uniqueId;
    NSUserActivity *_userActivity;
    CSSearchableItem *_searchableItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) NSString *domainId;
@property(readonly, nonatomic) double absoluteTimestamp;
- (id)initWithUserActivity:(id)arg1 uniqueId:(id)arg2 searchableItem:(id)arg3;
- (id)init;

@end
