//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSDictionary, NSSet, SKUIMissingItemLoader;

@protocol SKUIMissingItemDelegate <NSObject>

@optional
- (void)missingItemLoader:(SKUIMissingItemLoader *)arg1 didLoadItems:(NSDictionary *)arg2 invalidItemIdentifiers:(NSSet *)arg3;
@end

