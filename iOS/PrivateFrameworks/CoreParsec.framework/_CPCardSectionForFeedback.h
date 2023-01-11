//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardSectionForFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPCardSectionForFeedback : PBCodable <_CPCardSectionForFeedback, NSSecureCoding>
{
    NSString *_cardSectionId;
    NSString *_actionTarget;
    NSString *_actionDestination;
    NSString *_resultId;
}

@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *actionDestination; // @synthesize actionDestination=_actionDestination;
@property(copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

