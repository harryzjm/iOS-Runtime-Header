//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSMapTable, NSString;

@interface SBIconListViewIconVisibilityInfo : NSObject <BSDescriptionProviding, NSCopying>
{
    NSMapTable *_visibleRects;
    _Bool _normalized;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isNormalized) _Bool normalized; // @synthesize normalized=_normalized;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)enumerateVisibleIconsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSMapTable *visibleIconRects;
- (void)addValuesFromIconVisibilityInfo:(id)arg1;
- (void)setVisibleRect:(struct CGRect)arg1 forIcon:(id)arg2;
- (struct CGRect)visibleRectForIcon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
