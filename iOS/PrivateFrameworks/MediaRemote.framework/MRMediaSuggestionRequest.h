//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSUUID;

@interface MRMediaSuggestionRequest : NSObject <NSCopying>
{
    _Bool _includeArtwork;
    _Bool _useDirectAccess;
    unsigned long long _maxResults;
    NSUUID *_requestIdentifier;
}

+ (id)defaultRequestWithArtwork;
+ (id)defaultRequest;
- (void).cxx_destruct;
@property(nonatomic) _Bool useDirectAccess; // @synthesize useDirectAccess=_useDirectAccess;
@property(copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(nonatomic) _Bool includeArtwork; // @synthesize includeArtwork=_includeArtwork;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
- (void)performWithPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
