//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PUPhotosSectionHeaderMetrics : NSObject
{
    double _cachedHeights[4];
}

+ (id)sharedMetrics;
- (double)accessibilitySectionHeaderHeightForStyle:(long long)arg1 width:(double)arg2 actionButton:(_Bool)arg3 disclosure:(_Bool)arg4 title:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 locations:(id)arg8;
- (double)sectionHeaderHeightForStyle:(long long)arg1 hasTitle:(_Bool)arg2 hasDates:(_Bool)arg3 hasLocation:(_Bool)arg4;
- (void)_invalidateCache;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)init;

@end

