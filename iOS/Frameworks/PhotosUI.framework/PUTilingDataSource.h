//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface PUTilingDataSource : NSObject
{
    NSString *_identifier;
    NSHashTable *__changeObservers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)init;

@end
