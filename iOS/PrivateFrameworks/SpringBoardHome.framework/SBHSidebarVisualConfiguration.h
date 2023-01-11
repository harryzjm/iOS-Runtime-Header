//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHSidebarVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    _Bool _contentFullscreen;
    double _contentWidth;
    double _searchBarTopOffset;
    struct NSDirectionalEdgeInsets _insets;
}

@property(nonatomic) struct NSDirectionalEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic, getter=isContentFullscreen) _Bool contentFullscreen; // @synthesize contentFullscreen=_contentFullscreen;
@property(nonatomic) double searchBarTopOffset; // @synthesize searchBarTopOffset=_searchBarTopOffset;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)effectiveContentWidthWithContainerWidth:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
