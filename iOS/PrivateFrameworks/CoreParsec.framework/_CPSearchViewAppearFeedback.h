//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSearchViewAppearFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPSearchViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int viewAppearEvent:1;
        unsigned int isOnLockScreen:1;
        unsigned int isOverApp:1;
        unsigned int readerTextAvailable:1;
    } _has;
    _Bool _isOnLockScreen;
    _Bool _isOverApp;
    _Bool _readerTextAvailable;
    int _viewAppearEvent;
    unsigned long long _timestamp;
}

@property(nonatomic) _Bool readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) _Bool isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) _Bool isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) int viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasReaderTextAvailable;
@property(readonly, nonatomic) _Bool hasIsOverApp;
@property(readonly, nonatomic) _Bool hasIsOnLockScreen;
@property(readonly, nonatomic) _Bool hasViewAppearEvent;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

