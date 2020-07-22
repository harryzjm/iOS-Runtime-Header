//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsSink-Protocol.h>

@class NSString;
@protocol MapsSuggestionsSink;

@interface SinkContainer : NSObject <MapsSuggestionsSink>
{
    unsigned long long _hashValue;
    id <MapsSuggestionsSink> _weakSink;
}

@property(nonatomic) __weak id <MapsSuggestionsSink> weakSink; // @synthesize weakSink=_weakSink;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
