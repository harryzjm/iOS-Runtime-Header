//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPunchout-Protocol.h>

@class NSArray, NSData, NSString, _SFPBUserActivityData;

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
    _SFPBUserActivityData *_userActivityData;
    NSString *_actionTarget;
}

@property(copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain, nonatomic) _SFPBUserActivityData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasActionTarget;
@property(readonly, nonatomic) _Bool hasUserActivityData;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(id)arg1;
- (void)clearUrls;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasName;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

