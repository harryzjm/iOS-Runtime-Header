//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TLITunesTone : NSObject
{
    _Bool _purchased;
    _Bool _ringtone;
    _Bool _protectedContent;
    _Bool _privateTone;
    NSString *_identifier;
    NSString *_name;
    NSString *_albumTitle;
    NSString *_artistName;
    NSString *_genreName;
    NSString *_filePath;
    NSNumber *_syncIdentifier;
    unsigned long long _storeItemIdentifier;
    NSString *_storeFrontIdentifier;
    NSString *_artworkFile;
    double _duration;
    NSNumber *_fadeInDurationNumber;
    NSNumber *_fadeOutDurationNumber;
}

+ (id)_identifierForPropertyListRepresentation:(id)arg1;
@property(readonly, nonatomic) NSNumber *fadeOutDurationNumber; // @synthesize fadeOutDurationNumber=_fadeOutDurationNumber;
@property(readonly, nonatomic) NSNumber *fadeInDurationNumber; // @synthesize fadeInDurationNumber=_fadeInDurationNumber;
@property(readonly, nonatomic, getter=isPrivateTone) _Bool privateTone; // @synthesize privateTone=_privateTone;
@property(readonly, nonatomic, getter=isProtectedContent) _Bool protectedContent; // @synthesize protectedContent=_protectedContent;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *artworkFile; // @synthesize artworkFile=_artworkFile;
@property(readonly, nonatomic, getter=isRingtone) _Bool ringtone; // @synthesize ringtone=_ringtone;
@property(readonly, nonatomic, getter=isPurchased) _Bool purchased; // @synthesize purchased=_purchased;
@property(readonly, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(readonly, nonatomic) unsigned long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(readonly, nonatomic) NSNumber *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isDuplicateOfTone:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithToneStoreDownload:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;

@end

