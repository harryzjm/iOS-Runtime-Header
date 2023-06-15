//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSString, SXComponentAnimation, SXJSONArray;
@protocol SXComponentAnchor;

@protocol SXConditionalComponentProperties <NSObject>
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) NSString *style;
@property(readonly, nonatomic) NSString *layout;
@end

