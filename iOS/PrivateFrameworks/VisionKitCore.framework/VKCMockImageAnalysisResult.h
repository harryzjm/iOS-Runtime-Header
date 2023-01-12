//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, VKCMockTextProvider;

__attribute__((visibility("hidden")))
@interface VKCMockImageAnalysisResult
{
    _Bool _isRunningTest;
    NSString *_text;
    NSArray *_dataDetectors;
    NSArray *_allLineQuads;
    NSDictionary *_sourceDict;
    VKCMockTextProvider *_textProvider;
    struct CGSize _imageSize;
}

+ (id)mockImageAnalysisResultFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VKCMockTextProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(retain, nonatomic) NSDictionary *sourceDict; // @synthesize sourceDict=_sourceDict;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool isRunningTest; // @synthesize isRunningTest=_isRunningTest;
- (id)dataDetectors;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)adjustTextRangeToSelectableRange:(id)arg1;
- (id)smallestSelectableRangeForPosition:(id)arg1;
- (id)rangeOfWordForPosition:(id)arg1;
- (id)rangeOfLineForPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect)arg3;
- (struct CGRect)firstRectForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect)arg3;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)allLineQuads;
- (id)stringForLine:(id)arg1;
- (void)generateText;
- (void)addMockDataDetectorElementsFromArray:(id)arg1;

@end
