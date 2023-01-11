//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailMessage, MFMessageLoadingContext, MFMimeBody, MFMimePart, NSArray, NSError;

@interface MFMessageLoadingContextEvent : NSObject
{
    _Bool _hasLoadedCompleteBody;
    _Bool _hasLoadedBestAlternativePart;
    MFMessageLoadingContext *_context;
    NSArray *_content;
    unsigned long long _remainingBytes;
    long long _transportType;
    NSError *_error;
    MFMimePart *_loadedPart;
    MFMimeBody *_loadedBody;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MFMimeBody *loadedBody; // @synthesize loadedBody=_loadedBody;
@property(retain, nonatomic) MFMimePart *loadedPart; // @synthesize loadedPart=_loadedPart;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned long long remainingBytes; // @synthesize remainingBytes=_remainingBytes;
@property(nonatomic) _Bool hasLoadedBestAlternativePart; // @synthesize hasLoadedBestAlternativePart=_hasLoadedBestAlternativePart;
@property(nonatomic) _Bool hasLoadedCompleteBody; // @synthesize hasLoadedCompleteBody=_hasLoadedCompleteBody;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;
@property(nonatomic) __weak MFMessageLoadingContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) MFMailMessage *message;
- (id)debugDescription;
- (id)description;
- (id)_descriptionForDebugging:(_Bool)arg1;
@property(readonly, nonatomic) NSError *smimeError;

@end
