//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface SUUIRemoveFromWishlistOperation : NSOperation
{
    long long _entityID;
    long long _itemID;
    long long _reason;
}

- (void)main;
- (id)initWithItemIdentifier:(long long)arg1 entityIdentifier:(long long)arg2 reason:(long long)arg3;

@end

