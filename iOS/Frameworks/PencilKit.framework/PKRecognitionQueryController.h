//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PKRecognitionSessionManager;

@interface PKRecognitionQueryController : NSObject
{
    NSMutableDictionary *_drawingQueries;
    NSMutableDictionary *_visibleStrokeQueries;
    NSMutableDictionary *_queriesToCreate;
    PKRecognitionSessionManager *_recognitionManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PKRecognitionSessionManager *recognitionManager; // @synthesize recognitionManager=_recognitionManager;
@property(retain) NSMutableDictionary *queriesToCreate; // @synthesize queriesToCreate=_queriesToCreate;
@property(retain) NSMutableDictionary *visibleStrokeQueries; // @synthesize visibleStrokeQueries=_visibleStrokeQueries;
@property(retain) NSMutableDictionary *drawingQueries; // @synthesize drawingQueries=_drawingQueries;
- (void)clearDrawingQueries;
- (void)clearVisibleStrokesQueries;
- (void)flushAllQueries;
- (void)setupDrawingQueriesIfNecessary;
- (id)setupAndStartQuery:(Class)arg1;
- (void)setupVisibleStrokesQueries;
- (void)updateQueriesIfNecessaryWithState:(long long)arg1;
- (id)drawingQueryWithIdentifier:(id)arg1;
- (id)visibleStrokesQueryWithIdentifier:(id)arg1;
- (void)_cleanupQuery:(id)arg1;
- (void)removeQueryWithIdentifier:(id)arg1;
- (void)addQueryOfType:(Class)arg1 withIdentifier:(id)arg2;
- (id)initWithRecognitionSessionManager:(id)arg1;

@end
