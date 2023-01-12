//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHCustomCatalogMatcher, SHMediaTimeline;
@protocol SHMatcherDelegate;

__attribute__((visibility("hidden")))
@interface SHMediaTimelineCustomCatalogMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;
    SHMediaTimeline *_contextTimeline;
    SHCustomCatalogMatcher *_customCatalogMatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SHCustomCatalogMatcher *customCatalogMatcher; // @synthesize customCatalogMatcher=_customCatalogMatcher;
@property(retain, nonatomic) SHMediaTimeline *contextTimeline; // @synthesize contextTimeline=_contextTimeline;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)restartTimelineWithMediaItems:(id)arg1;
- (void)callDelegateWithSyntheticMatchForResponse:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (void)mediaTimeline:(id)arg1 hasUpdatedInScopeMediaItems:(id)arg2;
- (void)stop;
- (void)startRecognitionForRequest:(id)arg1;
- (id)initWithCustomCatalog:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

