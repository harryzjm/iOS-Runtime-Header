//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface SKUILoadItemsResponse : NSObject
{
    NSDictionary *_loadedItems;
    NSSet *_invalidItemIdentifiers;
}

@property(copy, nonatomic) NSSet *invalidItemIdentifiers; // @synthesize invalidItemIdentifiers=_invalidItemIdentifiers;
@property(copy, nonatomic) NSDictionary *loadedItems; // @synthesize loadedItems=_loadedItems;
- (void).cxx_destruct;

@end
