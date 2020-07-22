//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCForYouQueryUtilities : NSObject
{
}

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(CDUnknownBlockType)arg2 hiddenFeedIDs:(id)arg3 purchasedTagIDs:(id)arg4 appConfiguration:(id)arg5 maxCount:(unsigned long long)arg6 tagIDFeedRangeProvider:(CDUnknownBlockType)arg7 isRunningPPT:(_Bool)arg8;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 contentContext:(id)arg4 fallbackToPresubscribedTagIDs:(_Bool)arg5 qualityOfService:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 contentContext:(id)arg4 fallbackToPresubscribedTagIDs:(_Bool)arg5 qualityOfService:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end
