//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>

@class ASCOfferMetadata, ASCOfferTheme;

__attribute__((visibility("hidden")))
@interface ASCOfferPresenterViewState : NSObject <NSCopying>
{
    ASCOfferMetadata *_metadata;
    ASCOfferTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) ASCOfferTheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 theme:(id)arg2;

@end
