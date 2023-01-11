//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchUIWatchListUtilities : NSObject
{
    _Bool _isWatchListed;
    NSString *_watchListIdentifier;
}

+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(nonatomic) _Bool isWatchListed; // @synthesize isWatchListed=_isWatchListed;
- (void).cxx_destruct;
- (void)toggleWatchListWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 watchListed:(_Bool)arg2;
- (id)initWithResponse:(id)arg1;

@end

