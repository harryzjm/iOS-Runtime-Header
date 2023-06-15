//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIPageComponent.h"

@class NSString, SUUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SUUIBrowseItemComponent : SUUIPageComponent
{
    NSString *_title;
    NSString *_subtitle;
    long long _index;
    SUUIImageViewElement *_decorationImage;
    _Bool _showTopBorder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SUUIImageViewElement *decorationImage; // @synthesize decorationImage=_decorationImage;
@property(nonatomic) _Bool showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;

@end

