//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMModifying-Protocol.h>

@class NSString;

@interface SXDOMAnalyzerModifier : NSObject <SXDOMModifying>
{
}

- (void)analyzeDataTableCellStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeDataTableStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeInlineTextStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeFormattedText:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeDataTableComponent:(id)arg1 DOM:(id)arg2;
- (void)analyzeGalleryComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeScalableImageComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeButtonComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeTextComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeComponents:(id)arg1 parent:(id)arg2 DOM:(id)arg3;
- (void)modifyDOM:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
