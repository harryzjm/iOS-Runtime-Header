//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/TSWPUIGraphicalAttachment.h>

@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment
{
    _Bool _active;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _neverShowsMenu;
    _Bool _inInvalidate;
    TSTExpressionNode *_expressionNode;
    struct CGImage *_cachedImage;
    double _cachedImageScreenScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool inInvalidate; // @synthesize inInvalidate=_inInvalidate;
@property(nonatomic) double cachedImageScreenScale; // @synthesize cachedImageScreenScale=_cachedImageScreenScale;
@property(nonatomic) struct CGImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(nonatomic, getter=neverShowsMenu) _Bool neverShowsMenu; // @synthesize neverShowsMenu=_neverShowsMenu;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=_expressionNode;
- (id)description;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)invalidate;
- (void)requestRedraw;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2;
- (id)copyIntoContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;

@end

