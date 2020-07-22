//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, NSString, SXComponentTextRules, SXComponentTextStyle, SXDocumentController, SXTextResizer, SXTextSource;

@protocol SXTextSourceDataSource <NSObject>
- (NSString *)contentSizeCategoryForTextSource:(SXTextSource *)arg1;
- (SXComponentTextStyle *)textStyleForTextSource:(SXTextSource *)arg1;
- (NSArray *)inlineTextStylesForTextSource:(SXTextSource *)arg1;
- (NSArray *)additionsForTextSource:(SXTextSource *)arg1;
- (SXComponentTextRules *)textRulesForTextSource:(SXTextSource *)arg1;
- (SXTextResizer *)textResizerForTextSource:(SXTextSource *)arg1;
- (SXDocumentController *)documentControllerForTextSource:(SXTextSource *)arg1;
@end

