//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSShadow, NSString, NSStringDrawingContext;

__attribute__((visibility("hidden")))
@interface SUUIAttributedStringLayout : NSObject
{
    NSAttributedString *_attributedString;
    struct CGSize _boundingSize;
    NSStringDrawingContext *_context;
    double _topInset;
    _Bool _usesTallCharacterSet;
    struct UIEdgeInsets _edgeInsetsForShadow;
    NSShadow *_shadow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsetsForShadow; // @synthesize edgeInsetsForShadow=_edgeInsetsForShadow;
@property(readonly, nonatomic) _Bool usesTallCharacterSet; // @synthesize usesTallCharacterSet=_usesTallCharacterSet;
@property(readonly, nonatomic) NSStringDrawingContext *stringDrawingContext; // @synthesize stringDrawingContext=_context;
@property(readonly, nonatomic) struct CGSize boundingSize; // @synthesize boundingSize=_boundingSize;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) long long numberOfLines;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double baselineOffset;
- (id)initWithLayoutRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

