//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFSearchSuggestion-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int score:1;
        unsigned int type:1;
        unsigned int previouslyEngaged:1;
    } _has;
    _Bool _previouslyEngaged;
    int _type;
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    double _score;
    NSArray *_duplicateSuggestions;
    NSString *_topicIdentifier;
    NSString *_bundleIdentifier;
    NSString *_fbr;
    NSString *_scopedSearchApplicationBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier; // @synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) _Bool previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions; // @synthesize duplicateSuggestions=_duplicateSuggestions;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasPreviouslyEngaged;
- (_Bool)hasType;
- (_Bool)hasScore;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

