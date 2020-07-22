//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class MSCLStoreItem, NSArray, NSURL, SKUIMediaSocialAuthor;

@interface MSCLConfiguration : NSObject <NSCopying>
{
    NSArray *_allowedExternalServices;
    NSArray *_audioCategoryNames;
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    NSURL *_baseTagLookupURL;
    MSCLStoreItem *_item;
    long long _maximumNumberOfAttachments;
    double _maximumSoundBiteDuration;
    NSArray *_potentalAuthors;
    NSArray *_suggestedTags;
    _Bool _allowsCamera;
    _Bool _allowsMicrophone;
}

@property(nonatomic) _Bool allowsMicrophone; // @synthesize allowsMicrophone=_allowsMicrophone;
@property(nonatomic) _Bool allowsCamera; // @synthesize allowsCamera=_allowsCamera;
@property(copy, nonatomic) NSArray *suggestedTags; // @synthesize suggestedTags=_suggestedTags;
@property(copy, nonatomic) NSArray *potentalAuthors; // @synthesize potentalAuthors=_potentalAuthors;
@property(nonatomic) double maximumSoundBiteDuration; // @synthesize maximumSoundBiteDuration=_maximumSoundBiteDuration;
@property(nonatomic) long long maximumNumberOfAttachments; // @synthesize maximumNumberOfAttachments=_maximumNumberOfAttachments;
@property(copy, nonatomic) MSCLStoreItem *item; // @synthesize item=_item;
@property(copy, nonatomic) SKUIMediaSocialAuthor *authorForActiveAccount; // @synthesize authorForActiveAccount=_authorForActiveAccount;
@property(copy, nonatomic) NSArray *audioCategoryNames; // @synthesize audioCategoryNames=_audioCategoryNames;
@property(copy, nonatomic) NSArray *allowedExternalServices; // @synthesize allowedExternalServices=_allowedExternalServices;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)authorsForSharing;
- (id)tagLookupURLWithTag:(id)arg1;
- (void)setTagLookupBaseURL:(id)arg1;
- (id)init;

@end

