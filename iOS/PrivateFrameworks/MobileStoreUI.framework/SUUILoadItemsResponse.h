//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface SUUILoadItemsResponse : NSObject
{
    NSDictionary *_loadedItems;
    NSSet *_invalidItemIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *invalidItemIdentifiers; // @synthesize invalidItemIdentifiers=_invalidItemIdentifiers;
@property(copy, nonatomic) NSDictionary *loadedItems; // @synthesize loadedItems=_loadedItems;

@end

