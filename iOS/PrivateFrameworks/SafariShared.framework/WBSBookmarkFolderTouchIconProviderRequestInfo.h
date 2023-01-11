//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSSet;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject
{
    NSMutableArray *_thumbnailImages;
    NSMutableArray *_backgroundColors;
    _Bool _hasScheduledCoalescedUpdate;
    NSSet *_subrequestTokens;
}

@property(nonatomic) _Bool hasScheduledCoalescedUpdate; // @synthesize hasScheduledCoalescedUpdate=_hasScheduledCoalescedUpdate;
@property(copy, nonatomic) NSSet *subrequestTokens; // @synthesize subrequestTokens=_subrequestTokens;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *backgroundColors;
@property(readonly, copy, nonatomic) NSArray *thumbnailImages;
- (void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)init;

@end

