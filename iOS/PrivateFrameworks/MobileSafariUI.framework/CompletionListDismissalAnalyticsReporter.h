//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CompletionListDismissalAnalyticsReporter : NSObject
{
    _Bool _goKeyTapped;
    _Bool _acceptedCompletionListItem;
    long long _unifiedFieldContentType;
}

@property(nonatomic) long long unifiedFieldContentType; // @synthesize unifiedFieldContentType=_unifiedFieldContentType;
@property(nonatomic) _Bool acceptedCompletionListItem; // @synthesize acceptedCompletionListItem=_acceptedCompletionListItem;
- (void)reportAnalytics;

@end
