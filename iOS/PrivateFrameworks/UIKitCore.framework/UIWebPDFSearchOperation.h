//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject, NSString, UIPDFDocument;
@protocol UIWebPDFSearchOperationDelegate;

__attribute__((visibility("hidden")))
@interface UIWebPDFSearchOperation : NSOperation
{
    NSMutableArray *_results;
    unsigned long long _pageIndex;
    unsigned long long _numberOfResultsToSkip;
    unsigned long long _totalResultsCount;
    unsigned long long _currentPageResultCount;
    _Bool _complete;
    unsigned long long startingPageIndex;
    UIPDFDocument *documentToSearch;
    NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
    double documentScale;
    NSString *searchString;
    unsigned long long resultLimit;
}

@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString;
@property(nonatomic) unsigned long long numberOfResultsToSkip; // @synthesize numberOfResultsToSkip=_numberOfResultsToSkip;
@property(nonatomic) double documentScale; // @synthesize documentScale;
@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate; // @synthesize searchDelegate;
@property(retain) UIPDFDocument *documentToSearch; // @synthesize documentToSearch;
@property(readonly, nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_pageIndex;
@property(nonatomic) unsigned long long startingPageIndex; // @synthesize startingPageIndex;
@property(readonly, nonatomic) unsigned long long currentPageResultCount; // @synthesize currentPageResultCount=_currentPageResultCount;
- (void)cancel;
- (void)main;
- (void)_search;
- (id)sanitizedAttributedStringForAttributedString:(id)arg1;
- (struct __CTFont *)_fontWithPDFFont:(struct CGPDFFont *)arg1 size:(double)arg2;
- (void)_notifyDelegateOfStatus;
- (_Bool)_hitSearchLimit;
- (void)dealloc;
- (id)init;

@end

