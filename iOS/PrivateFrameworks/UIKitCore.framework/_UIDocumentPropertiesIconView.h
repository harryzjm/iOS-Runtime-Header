//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class LPLinkMetadata, LPLinkView, NSLayoutConstraint, UIDocumentProperties;

__attribute__((visibility("hidden")))
@interface _UIDocumentPropertiesIconView : UIView
{
    UIDocumentProperties *_properties;
    LPLinkView *_linkView;
    NSLayoutConstraint *_centerXInsetConstraint;
    NSLayoutConstraint *_trailingInsetConstraint;
    NSLayoutConstraint *_centerYInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
    LPLinkMetadata *_metadata;
    struct NSDirectionalEdgeInsets _iconInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct NSDirectionalEdgeInsets iconInsets; // @synthesize iconInsets=_iconInsets;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (id)_preferredSender;
- (id)_preferredPresentationSourceItem;
- (void)_fireTapAction:(id)arg1;
- (void)_updateImage;
- (id)initWithMetadata:(id)arg1;
- (id)initWithProperties:(id)arg1 metadata:(id)arg2;

@end

