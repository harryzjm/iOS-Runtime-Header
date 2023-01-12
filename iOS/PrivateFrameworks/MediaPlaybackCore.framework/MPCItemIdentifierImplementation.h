//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPCItemIdentifierImplementation : NSObject
{
    NSString *_contentItemID;
    long long _repeatIndex;
}

+ (id)identifierForMFQueuePlayerItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long repeatIndex; // @synthesize repeatIndex=_repeatIndex;
@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithContentItemID:(id)arg1 repeatIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

