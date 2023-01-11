//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUICardViewLayout;

__attribute__((visibility("hidden")))
@interface VUICardViewLayoutFactory : NSObject
{
    VUICardViewLayout *_phoneLayout;
    VUICardViewLayout *_padLayout;
    VUICardViewLayout *_tvLayout;
    long long _cardLayoutType;
    long long _gridStyle;
    long long _gridType;
}

+ (id)cardViewFactoryForType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(readonly, nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(readonly, nonatomic) long long cardLayoutType; // @synthesize cardLayoutType=_cardLayoutType;
- (id)decoratedShelfLockupCardViewLayout;
- (id)videoLockupCardViewLayout;
- (id)editorialCardViewLayout;
- (id)upnextCardViewLayoutForIdiom:(long long)arg1;
- (id)standardCardViewLayoutForIdiom:(long long)arg1;
- (id)featuredCardViewLayoutForIdiom:(long long)arg1;
- (id)shadowForCardImageLayout;
- (id)_layoutForCardLayoutType:(long long)arg1 interfaceIdiom:(long long)arg2;
- (id)activeLayout;
- (id)initWithCardLayoutType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3;

@end
