//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@interface NSProgress (NSProgress_TSUAdditions)
+ (id)tsu_progressWithChildren:(id)arg1;
+ (id)tsu_progressWithTSUProgress:(id)arg1 totalUnitCount:(long long)arg2;
- (long long)tsu_pendingUnitCountForIncompleteProgress:(long long)arg1;
- (void)tsu_stopObservingTSUProgress;
@end

