//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDividerPageComponent : SKUIPageComponent
{
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dividerTitle; // @synthesize dividerTitle=_title;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithDividerTitle:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIDividerViewElement *viewElement; // @dynamic viewElement;

@end

