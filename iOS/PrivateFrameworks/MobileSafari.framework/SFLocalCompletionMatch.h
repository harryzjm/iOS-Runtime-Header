//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSURLCompletionMatch.h>

@protocol _SSURLCompletionMatch;

__attribute__((visibility("hidden")))
@interface SFLocalCompletionMatch : WBSURLCompletionMatch
{
    id <_SSURLCompletionMatch> _completionMatch;
}

- (void).cxx_destruct;
- (long long)matchLocation;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
- (id)initWithCompletionMatch:(id)arg1;

@end
