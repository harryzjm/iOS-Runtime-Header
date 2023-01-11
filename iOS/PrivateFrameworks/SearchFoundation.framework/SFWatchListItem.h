//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFWatchListItem-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFWatchListItem : NSObject <SFWatchListItem, NSSecureCoding, NSCopying>
{
    NSString *_watchListIdentifier;
    NSString *_seasonEpisodeTextFormat;
    NSString *_continueInTextFormat;
    NSString *_openButtonTitle;
    NSString *_installButtonTitle;
    NSString *_purchaseOfferTextFormat;
    NSString *_inUpNextText;
    NSString *_addToUpNextText;
    NSString *_addedToUpNextText;
    NSString *_watchLiveTextFormat;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *watchLiveTextFormat; // @synthesize watchLiveTextFormat=_watchLiveTextFormat;
@property(copy, nonatomic) NSString *addedToUpNextText; // @synthesize addedToUpNextText=_addedToUpNextText;
@property(copy, nonatomic) NSString *addToUpNextText; // @synthesize addToUpNextText=_addToUpNextText;
@property(copy, nonatomic) NSString *inUpNextText; // @synthesize inUpNextText=_inUpNextText;
@property(copy, nonatomic) NSString *purchaseOfferTextFormat; // @synthesize purchaseOfferTextFormat=_purchaseOfferTextFormat;
@property(copy, nonatomic) NSString *installButtonTitle; // @synthesize installButtonTitle=_installButtonTitle;
@property(copy, nonatomic) NSString *openButtonTitle; // @synthesize openButtonTitle=_openButtonTitle;
@property(copy, nonatomic) NSString *continueInTextFormat; // @synthesize continueInTextFormat=_continueInTextFormat;
@property(copy, nonatomic) NSString *seasonEpisodeTextFormat; // @synthesize seasonEpisodeTextFormat=_seasonEpisodeTextFormat;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

