//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLabelTypesetter-Protocol.h>

@class NSArray, NSAttributedString;

@interface PXLabelTypesetter <PXMutableLabelTypesetter>
{
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _allowTruncation;
    struct CGContext *_context;
    NSAttributedString *_attributedString;
    long long _typesettingMode;
    unsigned long long _maximumNumberOfLines;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    NSArray *_lines;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) double minimumTruncatedScaleFactor; // @synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor;
@property(nonatomic) _Bool allowTruncation; // @synthesize allowTruncation=_allowTruncation;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_setLines:(id)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (_Bool)_allowTextOverlapForFont:(struct UIFont *)arg1;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2;
- (void)_updateLines;
- (void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(struct UIFont *)arg2;
- (id)initWithContext:(struct CGContext *)arg1;
- (id)init;

@end

