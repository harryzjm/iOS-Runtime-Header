//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MusicKit_SoftLinking_MPModelRequest.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibrarySearchRequest : MusicKit_SoftLinking_MPModelRequest
{
    NSString *_searchTerm;
    NSArray *_scopes;
    long long _limit;
}

- (void).cxx_destruct;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSearchTerm:(id)arg1 scopes:(id)arg2 limit:(long long)arg3;

@end

